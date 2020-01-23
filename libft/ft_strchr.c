/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaboub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:23:26 by mzaboub           #+#    #+#             */
/*   Updated: 2019/04/30 21:35:32 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	i = 0;
	cc = (char)c;
	while (s[i++])
		if (s[i - 1] == cc)
			return ((char*)(s + i - 1));
	if (cc == '\0')
		return ((char*)(s + i - 1));
	return (NULL);
}
