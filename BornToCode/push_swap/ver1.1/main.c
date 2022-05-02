#include "push_swap.h"

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
	int i;
	int	j;
	int	length;

	i = 0;
	if (ac <= 1)
		exit(0);
	else
	{
		ft_split(av);
		while (0 != av[i])
		{
			ft_printf("스플릿 문자열 출력 - %s\n", av[i]);
			i++;	
		}
	}
	return (av);
}

int	main(int ac, char **av)
{
    t_deque	*deque_a;
	t_deque	*deque_b;

	deque_a = 0;
	deque_b = 0;
	av = check_error_and_split(ac, av);
	ft_deq_init(&deque_a, &deque_b);
	push_swap(av, deque_a, deque_b);
	system("leaks push_swap");
    return (0);
}

// while (0 != av[i])
// {
// 	j = 0;
// 	length = ft_strlen(av[i]);
// 	if (0 == length)
// 	{
// 		ft_printf("Error");
// 		exit(1);
// 	}
// 	else
// 	{
// 	}
// 	i++;
// }