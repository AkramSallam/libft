/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:39:10 by asallam           #+#    #+#             */
/*   Updated: 2026/10/07 15:30:59 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	total = nmemb * size;
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	p = malloc(total);
	if (p == NULL)
		return (p);
	return (ft_memset(p, 0, nmemb * size));
}
/*
#include <stdio.h>
int main()
{
	int *arr = ft_calloc(3, sizeof(int));
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);

	free(arr);
	return 0;
}
*/
