/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:23:00 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/10 16:50:53 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
			i++;
		}
	}
	else if (dest > src && n > 0)
	{
		while (n > 0)
		{
			n--;
			*(unsigned char*)(dest + n) = *(unsigned char*)(src + n);
		}
		*(unsigned char*)(dest + n) = *(unsigned char*)(src + n);
	}
	return (dest);
}
