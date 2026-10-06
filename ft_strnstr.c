/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: asallam <asallam@student.42amman.com>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/06 12:38:58 by asallam          #+#    #+#              */
/*   Updated: 2026/10/06 19:14:38 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	nlen;

	if (*needle == '\0')
		return ((char *)(haystack));
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
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
