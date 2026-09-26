#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	val;
	const unsigned char	*str;

	val = (unsigned char)c;
	str = (const unsigned char *)s;
	while (n--)
	{
		if (*str == val)
			return (str);
		str++;
	}
	return (NULL);
}