#include <string.h>

void	*ft_memrchr(const void *s, int c, size_t n)
{
	while (n && *((unsigned char*)(s + n)) != c)
		n--;
	if (n == 0 && *((unsigned char*)(s + n)) != c)
		return (NULL);
	else
		return ((unsigned char*)(s + n));
}
