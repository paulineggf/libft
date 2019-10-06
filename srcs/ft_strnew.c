#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	if (!(s = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
