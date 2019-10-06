#include <string.h>

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!n)
		return ((char*)h);
	while (i < len)
	{
		j = 0;
		while (h[i + j] == n[j])
		{
			if (n[j + 1] == '\0')
				return ((char*)h + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
