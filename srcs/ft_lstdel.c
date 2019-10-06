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
