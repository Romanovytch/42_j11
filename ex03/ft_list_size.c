#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 1;
	if (begin_list == NULL)
		return (0);
	while (list->next != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
