#include "libft.h"

static int	get_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
	{
		digits++;
		n = -n;
	}
	if (n == 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_digits(n);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	i = len - 1;
	while (n != 0)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	result[len] = '\0';
	return (result);
}