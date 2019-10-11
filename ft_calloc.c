/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:53:52 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/10 18:43:07 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*var;

	if (count == 0 || size == 0)
		return (NULL);
	if (!(var = (void*)malloc(count * size)))
		return (NULL);
	ft_bzero(var, count * size);
	return (var);
}
