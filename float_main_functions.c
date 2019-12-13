/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_print_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaboub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:30:02 by mzaboub           #+#    #+#             */
/*   Updated: 2019/12/13 07:16:58 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** *******************************# 1 #*****************************************
** help functions of bellow code;
*/

static void	ft_get_dbl_values(double nbr, t_bigint_compound *head, \
								t_int32 *exponent)
{
	t_floatunion	cast;
	t_uint64		mantissa;

	cast.fltnbr = nbr;
	mantissa = (cast.nbr & 0XFFFFFFFFFFFFF);
	*exponent = ((cast.nbr >> 52) & 0X7FF);
	head->sign = (cast.nbr >> 63);
	head->bigbit = -1337;
	if (*exponent != 0 && *exponent != 0X7FF)
	{
		mantissa = (1ull << 52) | mantissa;
		head->bigbit = 52;
		*exponent = (*exponent - 1075);
	}
	else if (*exponent == 0)
	{
		*exponent = 1 - 1075;
		head->bigbit = logbase2_64(mantissa);
	}
	ft_uint64_to_bigint(mantissa, &head->v_num);
}

/*
** ****************************************************************************
*/

static void	ft_get_ldbl_values(long double nbr, t_bigint_compound *head,\
														t_int32 *exponent)
{
	t_ldbl_union	cast;
	t_uint64		mantissa;

	cast.dbl = nbr;
	mantissa = (cast.integer.low & 0X7FFFFFFFFFFFFFFF);
	*exponent = ((cast.integer.high) & 0X7FFF);
	head->sign = (cast.integer.high >> 15);
	head->bigbit = -1337;
	if (*exponent != 0 && *exponent != 0x7FFF)
	{
		mantissa = ((1ull << 63) | mantissa);
		*exponent = (*exponent - 16446);
		head->bigbit = 63;
	}
	else if (*exponent == 0)
	{
		*exponent = 1 - 16446;
		head->bigbit = logbase2_64(mantissa);
	}
	ft_uint64_to_bigint(mantissa, &head->v_num);
}

/*
** ****************************************************************************
** here is the start;
*/

void		print_double(double nbr, t_buffer *node)
{
	t_bigint_compound	*compound;
	t_int32				exponent;

	compound = malloc(sizeof(t_bigint_compound));
	ft_bzero(compound, sizeof(t_bigint_compound));
	ft_get_dbl_values(nbr, compound, &exponent);
	ft_format_float(compound, exponent, node);
}

/*
** ***************************************************************************
*/

void		print_long_double(long double nbr, t_buffer *node)
{
	t_bigint_compound	*compound;
	t_int32				exponent;

	compound = malloc(sizeof(t_bigint_compound));
	ft_bzero(compound, sizeof(t_bigint_compound));
	ft_get_ldbl_values(nbr, compound, &exponent);
	ft_format_float(compound, exponent, node);
}
