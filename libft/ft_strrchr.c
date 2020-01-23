/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaboub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:47:01 by mzaboub           #+#    #+#             */
/*   Updated: 2019/05/07 14:04:27 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cc;
	char	*buf;

	cc = (char)c;
	i = 0;
	buf = NULL;
	while (s[i++])
		if (s[i - 1] == cc)
			buf = (char*)(s + i - 1);
	if (cc == '\0')
		buf = (char*)(s + i - 1);
	return (buf);
}
