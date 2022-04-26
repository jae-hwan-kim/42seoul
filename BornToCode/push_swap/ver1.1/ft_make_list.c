#include "push_swap.h"

void	ft_make_list(char **av, t_deque *deque_a, t_node **node_a)
{
	int i;
	int value;
	
	i = 1;
	while (0 != av[i])
	{
		value = ft_atoi(av[i]);
		ft_lstadd_back(node_a, ft_lstnew(value));
		i++;
	}
	deque_a->head = *node_a;
	deque_a->tail = ft_lstlast(*node_a);
	deque_a->size = ft_lstsize(*node_a);
}