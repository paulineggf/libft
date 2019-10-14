/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:28:13 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/14 10:12:27 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

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

static size_t	ft_strnlen(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		**ft_split_2(char **str, char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			if (!(str[j] = ft_strndup(s + i, ft_strnlen(s + i, c))))
				return (NULL);
		}
		else
			break ;
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	str[j] = 0;
	return (str);
}

static char		**ft_strfree(char **str)
{
	while (*str)
	{
		free(*str);
		(*str)++;
	}
	free(str);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**str;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i - 1] != c)
			count++;
	}
	if (!(str = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	if (ft_split_2(str, s, c) == NULL)
		return (ft_strfree(str));
	return (str);
}
