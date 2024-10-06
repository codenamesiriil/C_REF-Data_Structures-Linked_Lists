#include "./cns_sllists.h"

t_node	*cns_create_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);

	new_node->data = data;
	new_node->next = NULL;

	return (new_node);
}

t_node	*cns_traverse_list(t_node *list)
{
	t_node	*current = list;

	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}

void	cns_add_back(t_node **list, t_node *node)
{
	if (*list == NULL)
		*list = node;
	else
	{
		t_node	*current = cns_traverse_list(*list);
		current->next = node;
	}
}

void	cns_add_front(t_node **list, t_node *node)
{
	if (*list == NULL)
		*list = node;
	else
	{
		node->next = *list;
		*list = node;
	}
}

void	cns_print_list(t_node *list)
{
	t_node	*current = list;

	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}