#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char	*s;
	size_t	i;
		
	i = 0;
	if (!(s = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
		s[i++] = 0;
	return ((void*)s);
}
