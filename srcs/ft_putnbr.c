#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	long	nb;
	int		div;

	nb = n;
	div = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb / div >= 10)
		div = div * 10;
	while (div > 0)
	{
		ft_putchar(((nb / div) % 10) + 48);
		div = div / 10;
	}
}
