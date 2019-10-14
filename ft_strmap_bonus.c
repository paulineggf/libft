/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:27:05 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/14 12:01:48 by pganglof         ###   ########.fr       */
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

char			*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(s2 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		s2[i] = f(s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
