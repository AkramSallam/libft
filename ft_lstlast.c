/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:41:45 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 14:14:42 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
	t_list *root = ft_lstnew("node 1");
	root->next = ft_lstnew("node 2");

	t_list *lastnode = ft_lstlast(root);
	printf("%s\n", (char *)lastnode->content);

	free(root->next);
	free(root);
	return 0;
}
*/
