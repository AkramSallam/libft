#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	val;
	int	len;

	val = c;
	len = ft_strlen(s);
	while (*s)
		s++;
	if (*s == val)
		return ((char *)s);
	while (len--)
	{
		s--;
		if(*s == val)
			return ((char *)s);
	}
	return (NULL);
}

#include <stdio.h>

int main(){
	char str[] = "hello";
	printf("%s\n", ft_strrchr(str, 'h'));
	return 0;
}