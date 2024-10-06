#ifndef CNS_SLLISTS_H
# define CNS_SLLISTS_H

# include <stdio.h>
# include <stdlib.h>

typedef struct	s_node
{
    int				data;
    struct s_node 	*next;
} t_node;

t_node	*cns_create_node(int data);
t_node	*cns_traverse_list(t_node *list);
void	cns_add_back(t_node **list, t_node *node);
void	cns_add_front(t_node **list, t_node *node);
void	cns_print_list(t_node *list);

#endif