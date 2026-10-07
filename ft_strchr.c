/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: asallam <asallam@student.42amman.com>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/06 12:38:50 by asallam          #+#    #+#              */
/*   Updated: 2026/10/06 19:13:15 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	val;

	val = c;
	while (*s)
	{
		if (*s == val)
			return ((char *)(s));
		s++;
	}
	if (*s == val)
		return ((char *)(s));
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "akram sallam";
	char *c = ft_strchr(s, 'm');
	printf("%s\n", c);

	return 0;
}
*/
