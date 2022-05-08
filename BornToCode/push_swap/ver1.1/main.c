#include "push_swap.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	**check_error_and_split(int ac, char **av)
{
	int	i;
	char	**result;

	i = 0;
	if (ac <= 1)
		exit(0);
	else if (check_error(av))
	{
		ft_printf("Error\n");
		exit (1);
	}
	else
		result = ft_split(av);
	return (result);
}

int	main(int ac, char **av)
{
    t_deque	*deque_a;
	t_deque	*deque_b;
	// int 	i;
	// int 	j;
	char	**parse_parameter;

	deque_a = 0;
	deque_b = 0;
	parse_parameter = check_error_and_split(ac, av);

	// i = 0;
	// while (parse_parameter[i] != 0)
	// {
	// 	j = 0;
	// 	while (parse_parameter[i][j] != 0)
	// 	{
	// 		printf("parse_parameter[%d][%d] = %c\n", i, j, parse_parameter[i][j]);
	// 		j++;
	// 	}
	// 	i++;
	// }
	// ft_deq_init(&deque_a, &deque_b);
	// push_swap(av, deque_a, deque_b);
	// system("leaks push_swap");
    return (0);
}