#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s == d || n == 0)
		return (dest);
	if (s < d)
	{
		d += n;
		s += n;
		while (n--)
		{
			*d = *s;
			d--;
			s--;
		}
	}
	else
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char s[] = "123456";
	ft_memmove(s+2, s, 4);
	printf("%s\n", s);
	return 0;
}
*/