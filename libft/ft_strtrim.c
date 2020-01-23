/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaboub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:29:55 by mzaboub           #+#    #+#             */
/*   Updated: 2019/05/07 14:48:06 by mzaboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this fonction takes (pi) to the begining of words
** and (pj) to end of last word, ignoring whitspaces befor and after;
** and modifaying the lenght (len);
*/

static int		ft_ignore_wspace(char const *s, char **pi, char **pj, int len)
{
	while ((**pi == '\t' || **pi == '\n' || **pi == ' ') && len > 0)
	{
		(*pi)++;
		len--;
	}
	while ((**pj == '\t' || **pj == '\n' || **pj == ' ') && len > 0 && \
			*pj > (char*)s && *pi < *pj)
	{
		(*pj)--;
		len--;
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	char	*pi[1];
	char	*pj[1];
	size_t	k;
	size_t	len;
	char	*buf;

	if (!s)
		return (NULL);
	len = (int)ft_strlen(s);
	(*pi) = (char*)s;
	(*pj) = (char*)(s + len - 1);
	len = ft_ignore_wspace(s, pi, pj, len);
	if ((buf = ft_strnew(len)) == NULL)
		return (NULL);
	k = 0;
	(*pj)++;
	(*pi)--;
	while (++(*pi) < *pj)
		buf[k++] = **pi;
	buf[k] = '\0';
	return (buf);
}
