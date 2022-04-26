#include "push_swap.h"

void	print_lst(t_node *node)
{
	while (node)
	{
		printf("[%d]: %d\n", node->index, node->value);
		node = node->next;
	}
}

void	ft_swap_a(t_node **node_a)
{	
	int i;
	t_node	*curr;

	i = 0;
	curr = *node_a;
	curr -> next -> prev = 0;
	curr -> prev = curr -> next;
	curr -> next -> next -> prev = curr;
	curr -> next = curr -> next -> next;
	curr -> prev -> next = curr;
	*node_a = curr -> prev;
}

int	main(int ac, char **av)
{
    t_deque	*deque_a;
	t_deque	*deque_b;
	t_node	*node_a;
	t_node	*node_b;
	t_node	*curr;
	int	i;

	//check_error(av);
	i = 0;
	node_a = 0;
	node_b = 0;
	deque_b = ft_deqnew(deque_b);
	deque_a = ft_deqnew(deque_a);
    ft_make_list(av, deque_a, &node_a);
	ft_make_index(node_a);
	print_lst(node_a);
	printf("--------\n");
	ft_swap_a(&node_a);
	print_lst(node_a);
    //print_stack(node_a);
    //push_swap(first_stack);
	// system("leaks a.out");
    return (0);
}