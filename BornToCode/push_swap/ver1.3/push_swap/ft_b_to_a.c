/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:51:36 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/14 16:42:40 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_rr(t_deque *deque_b, int *position, int *top)
{
	ft_reverse_rotate_b(deque_b);
	*top = deque_b -> head -> index;
	(*position)++;
}

void	b_r(t_deque *deque_b, int *position, int *top)
{
	ft_rotate_b(deque_b);
	*top = deque_b -> head -> index;
	(*position)--;
}

void	check_position(t_node *node, int *size, int *position)
{
	while (0 != node)
	{
		if ((*size) - 1 == node -> index)
			break ;
		(*position)++;
		node = node -> next;
	}
}

void	b_to_a(t_deque *deque_a, t_deque *deque_b)
{
	int		top;
	int		mid;
	int		size;
	int		position;
	t_node	*node;

	size = deque_b -> size;
	while (0 < size)
	{
		position = 0;
		node = deque_b -> head;
		top = deque_b -> head -> index;
		check_position(node, &size, &position);
		mid = size / 2;
		if (mid < position)
			while (0 < size - position)
				b_rr(deque_b, &position, &top);
		else if (mid >= position)
			while (0 < position)
				b_r(deque_b, &position, &top);
		ft_push_a(deque_a, deque_b);
		size--;
	}
}
