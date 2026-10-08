/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:03:40 by asallam           #+#    #+#             */
/*   Updated: 2026/10/06 13:03:51 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
int main()
{
	char *content = ft_strdup("hello");
	t_list *node = ft_lstnew(content);

	printf("Before deletion: %s\n", (char *)node->content);
	ft_lstdelone(node, del_content);
	printf("Node deleted successfully.\n");
	return (0);
}
*/
