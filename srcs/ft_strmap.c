#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		s2[i] = f(s[i]);
		i++;
	}
	return (s2);
}
