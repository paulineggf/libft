#include <stdlib.h>
#include <string.h>

char	*ft_strndup(const char *s, size_t n)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
