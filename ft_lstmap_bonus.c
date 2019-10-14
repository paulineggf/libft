/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:20:40 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/14 12:28:11 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	*ft_lstclear_map(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (!lst || !del)
		return (NULL);
	while (*lst)
	{
		del((*lst)->content);
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	return (NULL);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *new;
	t_list *act;
	t_list *begin_list;

	begin_list = NULL;
	while (lst)
	{
		if (!(new = malloc(sizeof(t_list))))
			return (ft_lstclear_map(&begin_list, &free));
		new->content = f(lst->content);
		new->next = NULL;
		if (!begin_list)
		{
			begin_list = new;
			act = new;
		}
		else
		{
			act->next = new;
			act = new;
		}
		lst = lst->next;
	}
	return (begin_list);
}
