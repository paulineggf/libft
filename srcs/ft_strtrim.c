#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len_s;
	char	*s2;

	i = 0;
	len_s = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len_s] == ' ' || s[len_s] == '\n' || s[len_s] == '\t')
		len_s--;
	len_s = len_s - i + 1;
	if (!(s2 = malloc(sizeof(char) * (len_s + 1))))
		return (NULL);
	s2 = ft_strncpy(s2, s + i, len_s);
	return (s2);
}
