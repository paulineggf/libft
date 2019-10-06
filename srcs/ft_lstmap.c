#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin_list;
	t_list	*tmp;
	t_list 	*new;

	begin_list = ft_lstnew((void*)(f(lst))->content, lst->content_size);
	lst = lst->next;
	tmp = begin_list;
	while (lst)
	{
		new = ft_lstnew((void*)(f(lst))->content, lst->content_size);
		tmp->next = new;
		tmp = tmp->next;
		lst = lst->next;
	}
	return (begin_list);
}
