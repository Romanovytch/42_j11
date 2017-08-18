#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list == NULL)
		return;
	elem = (*begin_list)->next;
	while (elem != NULL)
		{
			elem = (*begin_list)->next;
			free(*begin_list);
		}

}
