#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen(s);
	while (len_s > 0 && s[len_s] != c)
		len_s--;
	if (s[len_s] == c)
		return ((char*)(s + len_s));
	else
		return (0);
}
