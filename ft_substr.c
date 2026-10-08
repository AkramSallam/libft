/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:40:52 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 14:14:14 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	sz;

	sz = ft_strlen(s);
	if (start >= sz)
		len = 0;
	else if (len > sz - start)
		len = sz - start;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "akram sallam";
	char *s = ft_substr(str, 6, 7);
	printf("%s\n", s);
	
	free(s);
	return 0;
}
*/
