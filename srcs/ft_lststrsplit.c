#include <stdlib.h>
#include "libft.h"

t_list	*ft_lststrsplit(char const *s, char c)
{
	t_list	*lst_new;
	t_list	*lst_last;
	int		len_s;

	len_s = ft_strlen(s) - 1;
	if (!(lst_last = malloc(sizeof(t_list))))
		return (NULL);
	lst_last = NULL;
	while (len_s >= 0)
	{
		while (len_s >= 0 && s[len_s] == c)
			len_s--;
		while (len_s >= 0 && s[len_s] != c)
			len_s--;
		if (s[len_s + 1] != c)
		{
			lst_new = ft_lstnew((void const*)ft_strndup(s + len_s + 1, 
			ft_strnlen(s + len_s + 1, c)), ft_strnlen(s + len_s + 1, c));
			ft_lstadd(&lst_last, lst_new);
			lst_last = lst_new;
		}
	}
	return (lst_last);
}
