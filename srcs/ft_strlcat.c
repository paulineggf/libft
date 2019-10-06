#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dest_len;

	n = size;
	s = src;
	while (n-- != 0 && *d != '\0')
		d++;
	dest_len = d - dest;
	n = size - dest_len;
	if (n == 0)
		return (dest_len + ft_strlen(s));
	while (*s)
	{
		if (n-- != 1)
			*d++ = *s;
		s++;
	}
	*d = '\0';
	return (dest_len + (s - src));
}
