/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:28:42 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/14 11:17:05 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (!(s2 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	j = 0;
	if (start <= ft_strlen(s))
	{
		i = start;
		while (i < len + start)
		{
			s2[j++] = s[i];
			i++;
		}
	}
	s2[j] = '\0';
	return (s2);
}
