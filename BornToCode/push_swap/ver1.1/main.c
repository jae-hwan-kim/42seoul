#include "push_swap.h"

int	main(int ac, char **av)
{
    t_deque	*deque_a;
	t_deque	*deque_b;
	t_node	*node_a;
	int		*parsing;
	
	deque_a = 0;
	deque_b = 0;
	node_a = 0;
	parsing = check_error_and_split(ac, av);
	
	printf("parsing = %d\n", parsing[0]);
	printf("parsing = %d\n", parsing[1]);
	printf("parsing = %d\n", parsing[2]);
	printf("parsing = %d\n", parsing[3]);
	printf("parsing = %d\n", parsing[4]);
	printf("parsing = %d\n", parsing[5]);
	printf("parsing = %d\n", parsing[6]);
	printf("parsing = %d\n", parsing[7]);
	printf("parsing = %d\n", parsing[8]);
	ft_deq_init(&deque_a, &deque_b);
	ft_make_list_index(parsing, deque_a, node_a);
	// print_all(deque_a, deque_b);
	// push_swap(deque_a, deque_b);
	system("leaks push_swap");
    return (0);
}