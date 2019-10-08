/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:28:42 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/08 16:26:34 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	j;

	if (!(s2 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = start;
	j = 0;
	while (i < len + start)
	{
		s2[j++] = s[i];
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
