/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:17:42 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 14:20:11 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	sz;

	sz = 0;
	while (lst != NULL)
	{
		sz++;
		lst = lst->next;
	}
	return (sz);
}
/*
#include <stdio.h>
int main()
{
	t_list *root = ft_lstnew("node 1");
	root->next = ft_lstnew("node 2");
	root->next->next = ft_lstnew("node 3");

	unsigned int x = ft_lstsize(root);
	printf("%d\n", x);


	free(root->next->next);
	free(root->next);
	free(root);
	return 0;
}
*/
