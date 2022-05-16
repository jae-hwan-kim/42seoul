/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:53:26 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:53:27 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "checker.h"

int	ft_same_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0' )
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}

void	end_of_line(t_deque *deque_a, int ac)
{
	if (check_sorting(deque_a) || ac == 2)
	{
		ft_printf("OK\n");
		exit(0);
	}
	else if (!check_sorting(deque_a))
	{
		ft_printf("KO\n");
		exit(0);
	}
}

void	execute_operation(t_deque *deque_a, t_deque *deque_b, char *line)
{
	if (ft_same_strcmp("sa\n", line))
		ft_swap_a(deque_a);
	else if (ft_same_strcmp("sb\n", line))
		ft_swap_b(deque_b);
	else if (ft_same_strcmp("ss\n", line))
		ft_swap_ab(deque_a, deque_b);
	else if (ft_same_strcmp("pa\n", line))
		ft_push_a(deque_a, deque_b);
	else if (ft_same_strcmp("pb\n", line))
		ft_push_b(deque_a, deque_b);
	else if (ft_same_strcmp("ra\n", line))
		ft_rotate_a(deque_a);
	else if (ft_same_strcmp("rb\n", line))
		ft_rotate_b(deque_b);
	else if (ft_same_strcmp("rr\n", line))
		ft_rotate_ab(deque_a, deque_b);
	else if (ft_same_strcmp("rra\n", line))
		ft_reverse_rotate_a(deque_a);
	else if (ft_same_strcmp("rrb\n", line))
		ft_reverse_rotate_b(deque_b);
	else if (ft_same_strcmp("rrr\n", line))
		ft_reverse_rotate_ab(deque_a, deque_b);
	else
	{
		ft_printf("Error\n");
		exit(1);
	}
}

void	check_stdin(t_deque *deque_a, t_deque *deque_b, int ac)
{
	char	*line;
	int		fd;

	fd = 0;
	line = get_next_line(fd);
	if (0 == line)
		end_of_line(deque_a, ac);
	else
		execute_operation(deque_a, deque_b, line);
}

int	main(int ac, char **av)
{
	t_deque	*deque_a;
	t_deque	*deque_b;
	t_node	*node_a;
	int		*parsing;
	
	if (ac == 1)
		return (0);
	deque_a = 0;
	deque_b = 0;
	node_a = 0;
	parsing = check_error_and_split(ac, av);
	ft_deq_init(&deque_a, &deque_b);
	ft_make_list_index(parsing, deque_a, node_a);
	while (1)
		check_stdin(deque_a, deque_b, ac);
	return (0);
}
