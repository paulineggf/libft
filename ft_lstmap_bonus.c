/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:20:40 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/10 19:38:32 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*begin_list;
	t_list	*tmp;

	begin_list = lst;
	tmp = begin_list;
	while (lst)
	{
		tmp1 = ft_lstnew();
		tmp = ft_lstnew(f(lst));

		lst = lst->next;
	}
	return (begin_list);
}
