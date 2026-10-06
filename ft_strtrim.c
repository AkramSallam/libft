/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: asallam <asallam@student.42amman.com>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/06 13:11:02 by asallam          #+#    #+#              */
/*   Updated: 2026/10/06 18:18:56 by asallam         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		l;
	int		r;
	int		i;

	l = 0;
	while (s1[l] && check(s1[l], set))
		l++;
	r = ft_strlen(s1) - 1;
	while (r >= l && check(s1[r], set))
		r--;
	str = malloc(r - l + 2);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (l <= r)
	{
		str[i] = s1[l];
		l++;
		i++;
	}
	str[i] = '\0';
	return (char *)(str);
}
