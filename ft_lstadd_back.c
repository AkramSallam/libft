/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:47:32 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 12:48:25 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}
/*
#include <stdio.h>
int main()
{
	t_list	*root;
	t_list	*newnode;

	root = ft_lstnew("node 1");
	root->next = ft_lstnew("node 2");
	newnode = ft_lstnew("node 3");

	ft_lstadd_back(&root, newnode);

	printf("%s\n", (char *)root->content);
	printf("%s\n", (char *)root->next->content);
	printf("%s\n", (char *)root->next->next->content);

	free(root->next->next);
	free(root->next);
	free(root);
	return (0);
}
*/
