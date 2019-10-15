/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:53:52 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/15 19:18:00 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(s + i) = 0;
		i++;
	}
}

void		*ft_calloc(size_t count, size_t size)
{
	char	*var;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (!(var = malloc(sizeof(char) * (count * size))))
		return (NULL);
	ft_bzero((void*)var, count * size);
	return ((void*)var);
}
