#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i++])
		s2[i] = s[i];
	s2[i] = '\0';
	return (s2);
}
