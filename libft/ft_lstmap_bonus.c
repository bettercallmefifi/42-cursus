#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{	
	t_list	*ptr;
	t_list	*new;
	void	*he;

	ptr = new;
	if (!lst || !f || !del)
		return ;
	while (lst->next != NULL)
	{
		he = (*f)(lst->content);
		new = ft_lstnew(he);
		if (!new)
		{
			del(he);
			ft_lstclear(&ptr,del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (ptr);
}