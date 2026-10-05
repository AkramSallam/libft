#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		curr = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(curr, del);
	}
	*lst = NULL;
}
