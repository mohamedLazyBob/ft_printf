/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 05:38:31 by fokrober          #+#    #+#             */
/*   Updated: 2019/12/31 22:19:23 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int		ft_putptr(va_list ap, int flags, int precision, int width)
{
	SET_FLAG_ON(flags, POINTER);
	SET_FLAG_ON(flags, HASH);
	SET_FLAG_ON(flags, LLONG);
	return (ft_putxnbr(ap, flags, precision, width));
}

int		ft_putgnbr(va_list ap, int flags, int precision, int width)
{
	(void)(precision + flags + width);
	write(1, "", 1);
	va_arg(ap, void *);
	return (0);
}
