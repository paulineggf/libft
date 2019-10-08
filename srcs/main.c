#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int     main(void)
{
    char    *dest;

    if (!(dest = malloc(sizeof(char) * 6)))
        return (0);
    printf("ft_memcpy : %s\n", (char*)ft_memcpy((void*)dest, NULL, 0));
    //printf("memcpy : %s\n", (char*)memcpy((void*)dest, NULL, 0));
    return (0);
}
