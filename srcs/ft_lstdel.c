/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:19:26 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/07 15:19:27 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tmp_2;

	tmp = *alst;
	while (tmp)
	{
		tmp_2 = tmp;
		del((void*)tmp->content, tmp->content_size);
		tmp = tmp->next;
		free(tmp_2);
	}
	alst = NULL;
}
