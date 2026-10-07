/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:04:24 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 13:09:38 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s == d || n == 0)
		return (dest);
	if (s < d)
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "hello world";
	ft_memmove(s + 2, s, 5);
	printf("%s\n", s);

	int	arr[] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0};
	int	i;

	ft_memmove(arr + 5, arr, 5 * sizeof(int));

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
*/
