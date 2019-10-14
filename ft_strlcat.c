/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 21:19:49 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/14 19:25:57 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	ret;

	i = 0;
	j = 0;
	ret = 0;
	while (dest[i] && i < size)
		i++;
	if (i >= size)
		ret = ft_strlen(src) + size;
	else
		ret = ft_strlen(src) + i;
	len_dest = i;
	if (i < size)
	{
		while (src[j] && len_dest + j < size - 1)
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	return (ret);
}
