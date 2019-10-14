/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:52:42 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/14 19:25:54 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char		*ft_strdup(const char *s)
{
	char	*s2;
	int		i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

static char		*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		len_dest;

	i = 0;
	len_dest = (int)ft_strlen((const char*)dest);
	while (src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = src[i];
	return (dest);
}

static char		*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = NULL;
	if (!s1 && !s2)
		return (NULL);
	else if (s1 && s2)
	{
		if (!(s3 = (char*)malloc(sizeof(char) *
			(ft_strlen(s1) + ft_strlen(s2) + 1))))
			return (NULL);
		s3 = ft_strcpy(s3, s1);
		s3 = ft_strcat(s3, s2);
	}
	else if (s1 && !s2)
		return (ft_strdup(s1));
	else
		return (ft_strdup(s2));
	return (s3);
}
