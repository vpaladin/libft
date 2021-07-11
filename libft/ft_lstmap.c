#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*temp;

	if (!lst)
		return (NULL);
	first = NULL;
	temp = ft_lstnew(f(lst->content));
	if (!temp)
		return (NULL);
	first = temp;
	lst = lst->next;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (temp->next == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	temp->next = NULL;
	return (first);
}
