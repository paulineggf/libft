#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit_2(char **str, char const *s, char c)
{
	int 	i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			str[j] = ft_strndup(s + i, ft_strnlen(s + i, c));
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		count;
	char	**str;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i - 1] != c)
			count++;
	}
	if (!(str = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	return (ft_strsplit_2(str, s, c));
}
