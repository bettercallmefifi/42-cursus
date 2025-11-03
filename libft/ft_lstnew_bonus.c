#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return 0;
	new->content = content;
	new->next = NULL;
	return (new);
}

// int mainI()
// {
// 	t_list *node1 = ft_lstnew(1);
// 	t_list *node2 = ft_lstnew(1);
// 	t_list *node3 = ft_lstnew(1);

// 	node1->next = node2;
// 	node2->next = node3;
// }