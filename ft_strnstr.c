/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: asallam <asallam@student.42amman.com>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/06 12:38:58 by asallam          #+#    #+#              */
/*   Updated: 2026/10/07 12:55:00 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	nlen;

	if (*little == '\0')
		return ((char *)(big));
	nlen = 0;
	while (little[nlen])
		nlen++;
	i = 0;
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (i + j < len && little[j] && big[i + j] == little[j])
				j++;
			if (j == nlen)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char s1[] = "akram sallam";
	char s2[] = "sallam";
	printf("%s\n", (char *)ft_strnstr(s1, s2, 12));

	return 0;
}
*/
