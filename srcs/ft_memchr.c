#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *((unsigned char*)(s + i)) != c)
		i++;
	if (i == n)
		return (NULL);
	else
		return ((unsigned char*)(s + i));
}
