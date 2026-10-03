#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long	nb;
	long	div;
	char	c;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	div = 1;
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = '0' + (nb / div);
		write(fd, &c, 1);
		nb %= div;
		div /= 10;
	}
}