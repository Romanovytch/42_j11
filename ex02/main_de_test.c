#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	main()
{
	t_list	*list;

	list = NULL;
	ft_list_push_front(&list, "toto\n");
	ft_list_push_front(&list, "titi\n");
	ft_list_push_front(&list, "tata\n");
	ft_list_push_front(&list, "tutu\n");
	while (list != NULL)
	{
		printf("%s", (char*)list->data);
		list = list->next;
	}	
	return (0);
}
