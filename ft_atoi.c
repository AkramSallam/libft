#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	ans;
	int	sign;
	int	i;
	int	x;

	i = 0;
	ans = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
		ans = (ans * 10) + (nptr[i++] - '0');
	return (ans * sign);
}
