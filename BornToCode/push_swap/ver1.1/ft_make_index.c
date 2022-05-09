#include "push_swap.h"

void	ft_make_index(t_node *node_a)
{
	int		count;
	int		i;
	t_node	*checker;
	t_node	*first_node_a;
	t_node	*a;

	i = 0;
	checker = node_a;
	first_node_a = node_a;
	a = node_a;
	while (node_a)
	{
		count = 0;
		while (checker)
		{
			if (node_a->value > checker->value)
				count++;
			checker = checker->next;
		}
		node_a -> index = count;
		node_a = node_a -> next;
		checker = first_node_a;
	}
	node_a = 0;
}
