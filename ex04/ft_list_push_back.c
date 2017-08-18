#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*list;

	list = *begin_list;
	if (*begin_list == NULL)
	{
		new = ft_create_elem(data);
		(*begin_list) = new;
	}
	else
	{
		while (list->next != NULL)
			list = list->next;
		new = ft_create_elem(data);
		list->next = new;
	}
}
