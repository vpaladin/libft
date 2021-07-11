#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (lst)
	{
		while (*lst)
		{
			list = *lst;
			*lst = list->next;
			del(list->content);
			free(list);
		}
	}
	lst = NULL;
}
