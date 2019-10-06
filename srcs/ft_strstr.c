#include <string.h>

char	*ft_strstr(const char *h, const char *n)
{
	int		i;
	int		j;

	i = 0;
	if (!n)
		return ((char*)h);
	while (h[i])
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
