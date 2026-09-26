#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	nlen;

	if (*needle == '\0')
		return (haystack);
	nlen = 0;
	while (needle[nlen])
		nlen++;
	i = 0;
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (i + j < len && needle[j] && haystack[i + j] == needle[j])
				j++;
			if (j == nlen)
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}