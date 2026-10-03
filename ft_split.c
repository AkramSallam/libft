#include "libft.h"

static int wordcnt(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	allocate_mem(char **result, int idx, int wlen)
{
	int	i;

	i = 0;
	result[idx] = malloc(wlen + 1);
	if (result[idx] == NULL)
	{
		while (i < idx)
			free(result[i++]);
		free(result);
		return (1);
	}
	return (0);
}

static int	fill(char **result, char const *s, char c)
{
	int	len;
	int	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (allocate_mem(result, i, len))
				return (1);
			ft_strlcpy(result[i], s - len, len + 1);
			i++;
		}
	}
	result[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int	words;
	char	**result;

	if (s == NULL)
		return (NULL);
	words = wordcnt(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (fill(result, s, c))
		return (NULL);
	return (result);
}
