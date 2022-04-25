#include "push_swap.h"
#include <stdio.h>

void	ft_make_index(t_node *node_a)
{
	int		count;
	int		i;
	t_node	*checker;

	i = 0;	
	checker = node_a;
	printf("node_a -> av[%d] = %d, index = %d\n", node_a->index, node_a->value, node_a->index);
	while (node_a)
	{
		count = 0;
		while (checker)
		{
			if (node_a->value > checker->value)
				count++;
			checker = checker->next;
		}
		node_a->index = count;
		node_a = node_a->next;
	}
	
	// while (node_a)
	// {
	// 	printf("node_a -> av[%d] = %d, index = %d\n", i, node_a->value, node_a->index);
	// 	node_a = node_a -> next;
	// 	i++;
	// }
}

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

int	main(int ac, char **av)
{
    t_deque	*deque_a;
	t_node	*node_a;
	int	i;

	//check_error(av);
	i = 0;
	node_a = 0;
	deque_a = ft_deqnew(deque_a);
    ft_make_list(av, deque_a, &node_a);
	ft_make_index(node_a);
	// while (node_a)
	// {
	// 	printf("node_a -> av[%d] = %d, index = %d\n", i, node_a->value, node_a->index);
	// 	node_a = node_a -> next;
	// 	i++;
	// }
	// printf("deque -> head size = %d\n", deque_a->size);
    //print_stack(node_a);
    //push_swap(first_stack);
    return (0);
}