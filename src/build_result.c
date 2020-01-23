/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 03:30:18 by fokrober          #+#    #+#             */
/*   Updated: 2020/01/01 02:56:36 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int			max(int a, int b)
{
	return (a > b ? a : b);
}

void		fspecial(char *result, int *flags, int *special, int *conv)
{
	if (IS_ON(*flags, POINTER))
	{
		*special = 0;
		SET_FLAG_OFF(*flags, POINTER);
		*conv = HEX;
	}
	else
		*special = ((result[0] == '0') && !IS_ON(*flags, OCTAL));
}

int			gspecial(char *result, int *width, int *flags, int *conv)
{
	if (*width < 0)
	{
		*width = -(*width);
		SET_FLAG_ON(*flags, MINUS);
	}
	*conv = flag_lookup(*flags, 0, 12);
	return (*conv < 0);
}

char		*build_result(int flags, char *result, int precision, int width)
{
	static char	*(*build[5])(int*, char*, int, int) = {apply_precision, \
		apply_quote, apply_width, apply_hash, apply_signs};
	int			conv;
	int			i;
	int			len;
	int			special;

	if (gspecial(result, &width, &flags, &conv))
		return (result);
	i = 0;
	len = ft_strlen(result);
	fspecial(result, &flags, &special, &conv);
	result = build[i++](&flags, result, conv, precision);
	if (!(result = build[i++](&flags, result, conv, width)))
		return ("Error");
	if (!(result = build[i++](&flags, result, conv, width)))
		return ("Error");
	while (i < 5)
	{
		(i == 3 && special) ? i++ : 1;
		if (!(result = build[i++](&flags, result, conv,
						width - max(precision, len))))
			return ("Error");
	}
	return (result);
}

int			flag_lookup(int flags, int pos, int bound)
{
	int i;

	i = 0;
	while (i < bound)
	{
		if (IS_ON(flags, (pos + i)))
			return (i);
		i++;
	}
	return (-1);
}
