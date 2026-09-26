#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	val;

	val = c;
	while (*s)
	{
		if(*s == val)
			return (s);
		s++;
	}
	if (*s == val)
		return (s);
	return (NULL);
}