/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:40:30 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 12:40:31 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	val;

	p = (unsigned char *)s;
	val = (unsigned char)c;
	while (n--)
	{
		*p = val;
		p++;
	}
	return (s);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "Hello World";
	printf("%s\n", (char *)ft_memset(s, 'x', 5)); // xxxxx World
	
	int arr[] = {1, 2, 3, 4, 5, 6};
	ft_memset(arr, 0, sizeof(arr));

	for(int i=0;i<6;i++)
		printf("%d ", arr[i]); // 0 0 0 0 0 0
	printf("\n");
	

	return 0;
}
*/
