/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:38:31 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 12:38:33 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main()
{
	t_list *root = ft_lstnew("node 1");
	t_list *newnode = ft_lstnew("node 2");
	ft_lstadd_front(&root, newnode);

	printf("%s ", (char *)root->content);
	printf("%s\n", (char *)root->next->content);

	free(root->next);
	free(root);
	return 0;
}
*/
