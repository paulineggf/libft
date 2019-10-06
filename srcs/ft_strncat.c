#include <string.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len_dest;

	i = 0;
	len_dest = ft_strlen((const char*)dest);
	while (src[i] && i < n)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
