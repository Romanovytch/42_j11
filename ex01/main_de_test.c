#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	main()
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, "toto\n");
	ft_list_push_back(&list, "titi\n");
	ft_list_push_back(&list, "tata\n");
	ft_list_push_back(&list, "tutu\n");
	while (list != NULL)
	{
		printf("%s", (char*)list->data);
		list = list->next;
	}	
	return (0);
}
