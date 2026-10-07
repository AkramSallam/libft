/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:39:37 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 13:00:29 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	int src[] = {1, 2, 3, 4, 5};
	int dest[] = {};
	ft_memcpy(dest, src, 3);
	for(int i=0;i<3;i++)
		printf("%d ", dest[i]);
	printf("\n");

	return 0;
}
*/
