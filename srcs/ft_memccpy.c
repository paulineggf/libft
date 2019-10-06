#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *((int*)(src + i)) != c)
	{
		*((int*)(dest + i)) = *((int*)(src + i));
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		*((int*)(dest + i)) = c;
		return (dest + i + 1);
	}
}
