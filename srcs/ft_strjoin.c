#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(s3 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i++])
		s3[i] = s1[i];
	while (s2[j++])
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}

