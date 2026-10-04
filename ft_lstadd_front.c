#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *head = NULL;
	t_list *new_node = ft_lstnew("Hello, World!");
	ft_lstadd_front(&head, new_node);
	printf("%s\n", head->content);

	free(new_node);
	return 0;
}
*/