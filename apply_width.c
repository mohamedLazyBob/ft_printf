/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:15:23 by fokrober          #+#    #+#             */
/*   Updated: 2019/10/11 16:28:58 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*apply_minus(char *new_result, char *result, int len, int width)
{
	ft_memcpy(new_result, result, len);
	ft_memset(&new_result[len], ' ', width - len);
	return (new_result);
}

char	*apply_zero(char *new_result, char *result, int size, int sign)
{
	(void)result;
	ft_memset(new_result, '0', size + sign);
	(void)(sign && (new_result[0] = '-'));
	return (new_result);
}

char	*apply_width(int *flags, char *result, int conv, int width)
{
	char	*new_result;
	int		len;
	int		pholder;
	int		sign;

	new_result = result;
	if (width < 0)
	{
		width = -width;
		SET_FLAG_ON(*flags, MINUS);
	}
	if ((len = ft_strlen(result)) >= width)
		return (result);
	if (!(new_result = ft_strnew(width)))
		return (NULL);
	pholder = (IS_ON(*flags, MINUS) || !IS_ON(*flags, ZERO)) ? ' ' : '0';
	sign = (conv > STRING && result[0] == '-');
	ft_memset(new_result, pholder, width);
	ft_memcpy(&new_result[width - len], result, len);
	if (IS_ON(*flags, MINUS))
		apply_minus(new_result, result, len, width);
	else if (IS_ON(*flags, ZERO))
		apply_zero(new_result, result, width - len, sign);
	return (new_result);
}
