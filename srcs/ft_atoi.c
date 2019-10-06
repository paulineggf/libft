#include "libft.h"

int		ft_atoi(const char *s)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(s[i]))
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		res = res * 10 + s[i] - 48;
		i++;
	}
	return (res * sign);
}
