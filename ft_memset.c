#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	val;

	p = (unsigned char *)s;
	val = (unsigned char)c;
	while (n--)
	{
		*p = val;
		p++;
	}
	return (s);
}