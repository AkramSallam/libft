#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int	i;

	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (str);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}