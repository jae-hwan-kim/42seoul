#include "push_swap.h"

int	main(int ac, char **av)
{
    t_deque	*deque_a;
	t_deque	*deque_b;
	int		*parsing;
	
	deque_a = 0;
	deque_b = 0;
	parsing = check_error_and_split(ac, av);
	
	int i = 0;
	while (parsing[i])
	{
		printf("parsing = %d\n", parsing[i++]);
	}
	// ft_deq_init(&deque_a, &deque_b);
	// push_swap(parse_parameter, deque_a, deque_b);
	// print_lst_deq(deque_a);
	system("leaks push_swap");
    return (0);
}