/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:39:57 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 13:02:29 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	val;
	int		len;

	val = c;
	len = ft_strlen(s);
	while (*s)
		s++;
	if (*s == val)
		return ((char *)s);
	while (len--)
	{
		s--;
		if (*s == val)
			return ((char *)s);
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(){
	char str[] = "hello";
	printf("%s\n", ft_strrchr(str, 'h'));
	return 0;
}
*/
