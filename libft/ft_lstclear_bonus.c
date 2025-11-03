#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	while (*lst->next != NULL)
	{
		ptr = *lst;
		*lst = *lst->next;
		ft_lstdelone(ptr);
	}	
	*lst = NULL;
}