/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaboub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 22:04:12 by mzaboub           #+#    #+#             */
/*   Updated: 2019/05/07 14:08:05 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[i++])
	{
		j = 0;
		if (haystack[i - 1] == needle[j])
		{
			while (needle[j] && haystack[i + j - 1])
			{
				if (haystack[i + j - 1] == needle[j])
					j++;
				else
					break ;
				if (needle[j] == '\0')
					return ((char*)(haystack + i - 1));
			}
		}
	}
	return (NULL);
}
