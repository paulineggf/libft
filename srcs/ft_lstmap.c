/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:20:40 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/09 17:52:42 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin_list;
	t_list	*tmp;
	t_list	*new;

	if (!(begin_list = ft_lstnew((void*)(f(lst))->content, lst->content_size)))
		return (NULL);
	lst = lst->next;
	tmp = begin_list;
	while (lst)
	{
		if (!(new = ft_lstnew((void*)(f(lst))->content, lst->content_size)))
			return (NULL);
		tmp->next = new;
		tmp = tmp->next;
		lst = lst->next;
	}
	return (begin_list);
}
