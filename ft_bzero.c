/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:37:26 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 12:37:28 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p = 0;
		p++;
	}
}
/*
#include <stdio.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	ft_bzero(arr, sizeof(arr));

	for(int i=0;i<6;i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
*/
