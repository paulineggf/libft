#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		s2[i] = f(i, *s);
		i++;
	}
	return (s2);
}
