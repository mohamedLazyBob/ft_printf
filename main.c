/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 05:38:31 by fokrober          #+#    #+#             */
/*   Updated: 2019/12/24 14:05:32 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <float.h>
#include <locale.h>

/*
int		main(void)
{
	int		ret1;
	int		ret2;

	ret1 = ft_printf("{red}bonjour{eoc} [%+05.3d]\n", 10);
	ret2 = printf("bonjour [%+05.3d]\n", 10);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%+0.3d]\n", 10);
	ret2 = printf("bonjour [%+0.3d]\n", 10);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%0+.3d]\n", 10);
	ret2 = printf("bonjour [%0+.3d]\n", 10);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%0+.3x]\n", 10);
	ret2 = printf("bonjour [%0+.3x]\n", 10);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);
	ret1 = ft_printf("{red}bonjour{eoc} [%#0+.3x]\n", 10);
	ret2 = printf("bonjour [%#0+.3x]\n", 10);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);
	ret1 = ft_printf("{red}bonjour{eoc} [%0+.3X]\n", 10);
	ret2 = printf("bonjour [%0+.3X]\n", 10);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);
	ret1 = ft_printf("{red}bonjour{eoc} [%0'.3u]\n", 10);
	ret2 = printf("bonjour [%0+'.3u]\n", 10);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);
	ret1 = ft_printf("{red}bonjour{eoc} [%0'.3o]\n", 10000);
	ret2 = printf("bonjour [%0+'.3o]\n", 10000);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%#0'.3o]\n", 10000);
	ret2 = printf("bonjour [%#0+'.3o]\n", 10000);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%#010.3o]\n", 10000);
	ret2 = printf("bonjour [%#010.3o]\n", 10000);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%010.3o]\n", 10000);
	ret2 = printf("bonjour [%010.3o]\n", 10000);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%0'10.3o]\n", 10000);
	ret2 = printf("bonjour [%0'10.3o]\n", 10000);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%010d]\n", 10000);
	ret2 = printf("bonjour [%010d]\n", 10000);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%010hd]\n", 10000);
	ret2 = printf("bonjour [%010hd]\n", 10000);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%010hd]\n", 10);
	ret2 = printf("bonjour [%010hd]\n", 10);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);

	ret1 = ft_printf("{red}bonjour{eoc} [%0-'10.3o]\n", 10000);
	ret2 = printf("bonjour [%0-'10.3o]\n", 10000);
	printf("ret1 [%d]\nret2 [%d]\n", ret1, ret2);
	ret2 = 0;
	printbits(&ret2, 4);
	SET_FLAG_ON(ret2, 10);
	SET_FLAG_ON(ret2, 5);
	printbits(&ret2, 4);
	SET_FLAG_OFF(ret2, 5);
	SET_FLAG_OFF(ret2, 5);
	printbits(&ret2, 4);
	setlocale(LC_NUMERIC, "");
	ret1 = ft_printf("{red}bonjour{eoc} [%1$*2$'0d]\n", 12345678, 10);
*/



//	printf("printf    [%010c];\n", 'm');
//	printf("printf    [%.10c];\n", 'm');
//	printf("printf    [%7.3c];\n", 'm');
//	printf("printf    [%-.7c];\n", 'm');
//	printf("printf    [% c];\n", 'm');
//	printf("printf    [%+c];\n", 'm');

//	printf("printf    [%10c];\n", 'm');
// ft_printf("printf    [%10c];\n", 'm');
//    printf("printf    [%-7c];\n", 'm');
// ft_printf("printf    [%-7c];\n", 'm');
//    printf("printf    [%c];\n", 'm');
// ft_printf("printf    [%c];\n", 'm');

/*
int	main()
{

 	printf("printf    [hello %f];\n", -123456789.);
 ft_printf("printf    [hello %f];\n", -123456789.);
 	printf("printf    [hello %.f];\n", -123456789.);
 ft_printf("printf    [hello %.f];\n", -123456789.);
 	printf("printf    [hello %20f];\n", -123456789.);
 ft_printf("printf    [hello %20f];\n", -123456789.);
 	printf("printf    [hello %.13f];\n", -123456789.);
 ft_printf("printf    [hello %.13f];\n", -123456789.);

printf("-----------------\n");

printf("/-----------------/\n");

 	printf("printf    [hello [%e];\n", -123456789.);
 ft_printf("printf    [hello [%e];\n", -123456789.);
printf("-----------------\n");
 	printf("printf    [hello [%.e];\n", -123456789.);
 ft_printf("printf    [hello [%.e];\n", -123456789.);
printf("-----------------\n");
 	printf("printf    [hello [%20e];\n", -123456789.);
 ft_printf("printf    [hello [%20e];\n", -123456789.);
printf("-----------------\n");
 	printf("printf    [hello [%.13e];\n", -123456789.);
 ft_printf("printf    [hello [%.13e];\n", -123456789.);
printf("-----------------\n");
 	printf("printf    [hello [%.e];\n", -1234.56789);
 ft_printf("printf    [hello [%.e];\n", -1234.56789);
printf("-----------------\n");
 	printf("printf    [hello [%e];\n", 0.);
 ft_printf("printf    [hello [%e];\n", 0.);
printf("-----------------\n");
 	printf("printf    [hello [%030e];\n", 0.);
 ft_printf("printf    [hello [%030e];\n", 0.);
 
printf("-----------------\n");
 	printf("printf       [hello [%20e];\n", 0.);
 ft_printf("ft_printf    [hello [%20e];\n", 0.);
printf("-----------------\n");
 	printf("printf       [hello [%-030e];\n", 111999.666);
 ft_printf("ft_printf    [hello [%-030e];\n", 111999.666);

//printf("-----------------\n");

	printf("/-----------------/\n");
	return (0);
}
*/
/*
int		ft_putc(va_list ap, int flags, int precision, int width)
{
	ft_putstr("-------------------------\n");
	ft_putstr("ft_putchar\n");
	ft_putstr("-------------------------\n");
	ft_putstr("flags status\n");
	printbits(&flags, 4);
	printf("width %d\tprecision %d\n", width, precision);
	(void)ap;
	return (0);
}
*/
int		ft_putptr(va_list ap, int flags, int precision, int width)
{
	ft_putstr("-------------------------\n");
	ft_putstr("ft_putptr\n");
	ft_putstr("-------------------------\n");
	ft_putstr("flags status\n");
	printbits(&flags, 4);
	printf("width %d\tprecision %d\n", width, precision);
	(void)ap;
	return (0);
}

/*
int		ft_puts(va_list ap, int flags, int precision, int width)
{
	ft_putstr("-------------------------\n");
	ft_putstr("ft_putstr\n");
	ft_putstr("-------------------------\n");
	ft_putstr("flags status\n");
	printbits(&flags, 4);
	printf("width %d\tprecision %d\n", width, precision);
	(void)ap;
	return (0);
}
*/
/*
int		ft_putfnbr(va_list ap, int flags, int precision, int width)
{
	ft_putstr("-------------------------\n");
	ft_putstr("ft_putfnbr\n");
	ft_putstr("-------------------------\n");
	ft_putstr("flags status\n");
	printbits(&flags, 4);
	printf("width %d\tprecision %d\n", width, precision);
	(void)ap;
	return (0);
}
*/
/*
int		ft_putenbr(va_list ap, int flags, int precision, int width)
{
	ft_putstr("-------------------------\n");
	ft_putstr("ft_putenbr\n");
	ft_putstr("-------------------------\n");
	ft_putstr("flags status\n");
	printbits(&flags, 4);
	printf("width %d\tprecision %d\n", width, precision);
	(void)ap;
	return (0);
}
*/
int		ft_putgnbr(va_list ap, int flags, int precision, int width)
{
	ft_putstr("-------------------------\n");
	ft_putstr("ft_putgnbr\n");
	ft_putstr("-------------------------\n");
	ft_putstr("flags status\n");
	printbits(&flags, 4);
	printf("width %d\tprecision %d\n", width, precision);
	(void)ap;
	return (0);
}
