#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int sz;

	sz = 0;
	while (lst != NULL)
	{
		sz++;
		lst = lst->next;
	}
	return (sz);
}
/*
int main()
{
	t_list *root;
	root->content = "root node";
	root->next = malloc(sizeof(t_list));
	root->next->content = "second node";
	root->next->next = NULL;
	int sz = ft_lstsize(root);
	printf("Size of the linked list: %d\n", sz);

	free(root->next);
	free(root);
	return 0;
}
*/