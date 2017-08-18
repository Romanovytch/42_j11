#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	main()
{
	t_list	*list;
	t_list	*elem;

	list = NULL;
	ft_list_push_back(&list, "tata\n");
	elem = ft_list_last(list);	
	printf("Last elem : %s", (char*)elem->data);
	return (0);
}
