#include "./cns_sllists.h"

int	main(void)
{
	t_node *list = NULL;

	for (int i = 0; i < 10; i++)
	{
		cns_add_back(&list, cns_create_node(i));
	}
	cns_add_front(&list, cns_create_node(-1));
	cns_add_front(&list, cns_create_node(-2));

	cns_print_list(list);
	return (0);
}