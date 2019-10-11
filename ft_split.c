/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:28:13 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/11 11:53:06 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**ft_split_2(char **str, char const *s, char c)
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

char		**ft_split(char const *s, char c)
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
	return (ft_split_2(str, s, c));
}
