#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((void*)(*alst)->content, (*alst)->content_size);
	free(*alst);
	alst = NULL;
}
