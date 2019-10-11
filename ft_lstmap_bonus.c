/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:20:40 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/11 12:04:05 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*begin_list;

	tmp = f(lst);
	begin_list = tmp;
	tmp1 = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		tmp1->next = tmp;
		tmp1 = tmp1->next;
		lst = lst->next;
	}
	return (begin_list);
}
