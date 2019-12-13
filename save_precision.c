/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 20:29:53 by fokrober          #+#    #+#             */
/*   Updated: 2019/12/13 06:01:41 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		save_precision(char *fmt, int *precision, va_list ap)
{
	int		i;
	va_list	ap2;

	i = 0;
	va_copy(ap2, ap);
	if ((fmt && fmt[0] == '.') && (++fmt))
	{
		while ((fmt[i] && ft_isdigit(fmt[i])))
			i++;
		if (i != 0)
		{
			*precision = ft_atoi(fmt);
			// you should close ap2 here
			if (*precision == 0)
				*precision = -1;
			return (++i);
		}
		else if (fmt[0] == '*')
		{
			i = va_argnth(ap2, fmt + 1);
			(void)((i && ft_atoi(fmt + 1)) && (*precision = va_arg(ap2, int)));
			(void)((!i) && (*precision = va_arg(ap, int)));
			i++;
		}
		else
			*precision = -1;
		++i;
	}
	va_end(ap2);
	return (i);
}