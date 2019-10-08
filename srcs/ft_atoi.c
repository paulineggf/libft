/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:38:16 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/08 13:32:47 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *s)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		res = res * 10 + (s[i] - 48);
		i++;
	}
	return (res * sign);
}
