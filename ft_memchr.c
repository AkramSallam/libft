/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: asallam <asallam@student.42amman.com>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/06 12:36:47 by asallam          #+#    #+#              */
/*   Updated: 2026/10/06 18:01:16 by asallam         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		val;
	const unsigned char	*str;

	val = (unsigned char) c;
	str = (const unsigned char *) s;
	while (n--)
	{
		if (*str == val)
			return (void *)(str);
		str++;
	}
	return (NULL);
}
