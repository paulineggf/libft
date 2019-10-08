/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:23:00 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/07 15:23:03 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_2;

	if (!(dest_2 = (char*)malloc(sizeof(char) * n)))
		return (NULL);
	ft_memcpy(dest_2, src, n);
	ft_memcpy(dest, dest_2, n);
	free(dest_2);
	return (dest);
}
