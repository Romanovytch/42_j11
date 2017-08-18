#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list == NULL)
	{
		new = ft_create_elem(data);
		(*begin_list) = new;
	}
	else
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int	i;

	list = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}	
	return (list);
}
