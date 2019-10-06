#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	j;

	if (!(s2 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = start;
	j = 0;
	while (i++ < len + start)
		s2[j++] = s[i];
	s2[j] = '\0';
	return (s2);
}
