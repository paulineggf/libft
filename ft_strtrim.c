/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:28:48 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/14 10:22:24 by pganglof         ###   ########.fr       */
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

static int		ft_charset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (i);
		i++;
	}
	return (-1);
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

static char		*ft_strndup(const char *s, size_t n)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (s[i] && i < n)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len_s1;
	char	*s2;

	i = 0;
	len_s1 = ft_strlen(s1) - 1;
	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	while (s1[i] && ft_charset(s1[i], set) >= 0)
		i++;
	if (!s1[i])
	{
		if (!(s2 = ft_strndup("", 0)))
			return (NULL);
		return (s2);
	}
	while (ft_charset(s1[len_s1], set) >= 0)
		len_s1--;
	if (!(s2 = ft_strndup((s1 + i), ft_strlen(s1) -
		(ft_strlen(s1) - len_s1 - 1) - i)))
		return (NULL);
	return (s2);
}
