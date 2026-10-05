#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *root;
	t_list *new;
	void *content;

	if (lst == NULL || f == NULL)
		return (NULL);
	root = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (new == NULL)
		{
			del(content);
			ft_lstclear(&root, del);
			return (NULL);
		}
		ft_lstadd_back(&root, new);
		lst = lst->next;
	}
	return (root);
}