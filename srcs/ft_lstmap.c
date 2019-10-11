/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:20:40 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/10 15:19:11 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*begin_list;
	t_list	*tmp;

	if (!(begin_list = malloc(sizeof(t_list) * ft_lstsize(lst))))
		return (NULL);
	printf("lstsize : %d\n", ft_lstsize(lst));
	begin_list = lst;
	while (lst)
	{
		lst = f(lst->content);
		tmp = lst;
		printf("lst : %s\n", (char*)lst->content);
		lst = lst->next;
	}
	return (begin_list);
}
