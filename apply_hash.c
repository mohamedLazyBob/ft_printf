/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_hash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:12:14 by fokrober          #+#    #+#             */
/*   Updated: 2019/10/13 05:08:25 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*apply_hash_hex(char *result, int diff, char *prefix, int flags)
{
	int		i;

	if (result[0] == '0')
	{
		if (diff >= 2 && IS_ON(flags, MINUS))
			place_before(result, prefix, 1);
		else if (diff == 1)
		{
			result[0] = prefix[1];
			result = place_before(result, "0", 0);
		}
		else if (diff <= 0)
			result = place_before(result, prefix, 0);
		else
			ft_memcpy(result, prefix, 2);
	}
	else if (result[0] == ' ')
	{
		i = 2;
		while (result[0] == ' ' && i)
			place_at_lastsp(result, prefix[--i], 0);
		prefix[2 - i] = '\0';
		(void)(i && (result = place_before(result, &prefix[i - 1], 0)));
		return (result);
	}
	else if (result[0] != '0' && result[0] != ' ')
	{
		if (IS_ON(flags, MINUS) && diff > 0)
		{
			if (diff >= 2)
			{
				place_before(result, prefix, 1);
			}
			else if (diff == 1)
			{
				ft_memmove(result + 1, result, ft_strlen(result) - 1);
				ft_memcpy(result, prefix + 1, 1);
				result = place_before(result, "0", 0);
			}
		}
		else
			result = place_before(result, prefix, 0);
	}
	return (result);
}

char	*apply_hash_oct(char *result, int diff)
{
	if (result[0] == '0' && diff > 0)
	{
		result[0] = '0';
		return (result);
	}
	else if (result[0] == ' ')
	{
		place_at_lastsp(result, '0', 0);
		return (result);
	}
	return (place_before(result, "0", 0));
}

char	*apply_hash(int *flags, char *result, int conv, int diff)
{
	char	prefix[3];

	if (!IS_ON(*flags, HASH) || !result)
		return (result);
	if (conv == HEX || conv == BHEX)
	{
		(conv == HEX) ? ft_strcpy(prefix, "0x") : ft_strcpy(prefix, "0X");
		result = apply_hash_hex(result, diff, prefix, *flags);
	}
	else if (conv == OCTAL)
		result = apply_hash_oct(result, diff);
	return (result);
}

/*
**int		main(void)
**{
**	char	*s;
**
**	s = ft_strdup("bonjour");
**	printf("[%s]\n", apply_hash(0, s, HEX, 2));
**	s = ft_strdup(" bonjour");
**	printf("[%s]\n", apply_hash(0, s, HEX, 2));
**	s = ft_strdup("0bonjour");
**	printf("[%s]\n", apply_hash(0, s, HEX, 1));
**	s = ft_strdup("00bonjour");
**	printf("[%s]\n", apply_hash(0, s, HEX, 2));
**	return (0);
**}
*/