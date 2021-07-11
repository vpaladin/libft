#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_list;

	if (lst && *lst)
	{
		last_list = *lst;
		while (last_list->next)
			last_list = last_list->next;
		last_list->next = new;
	}
	else if (lst)
		*lst = new;
}
