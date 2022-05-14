/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:51:36 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:51:37 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	b_to_a_util(t_deque *deque_a, t_deque *deque_b, int *position, int *top, int *size)
// {
// 	// int	mid;

// 	// mid = (*size) / 2;
// 	// if (mid < *position)
// 	// {
// 	// 	while (0 < *size - *position)
// 	// 	{
// 	// 		ft_reverse_rotate_b(deque_b);
// 	// 		*top = deque_b -> head -> index;
// 	// 		(*position)++;
// 	// 	}
// 	// 	ft_push_a(deque_a, deque_b);
// 	// 	(*size)--;
// 	// }
// 	// else if (mid >= *position)
// 	// {
// 	// 	while (0 < *position)
// 	// 	{
// 	// 		ft_rotate_b(deque_b);
// 	// 		*top = deque_b -> head -> index;
// 	// 		(*position)--;
// 	// 	}
// 	// 	ft_push_a(deque_a, deque_b);
// 	// 	(*size)--;
// 	// }
// }

void	b_to_a(t_deque *deque_a, t_deque *deque_b)
{
	// int		top;
	// int		size;
	// int		position;
	// t_node	*node;

	// size = deque_b -> size;
	// while (0 < size)
	// {
	// 	position = 0;
	// 	node = deque_b -> head;
	// 	top = deque_b -> head -> index;
	// 	while (0 != node)
	// 	{
	// 		if (size - 1 == node -> index)
	// 			break ;
	// 		position++;
	// 		node = node -> next;
	// 	}
	// 	b_to_a_util(deque_a, deque_b, &position, &top, &size);
	// }
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
		while (0 != node)
		{
			if (size - 1 == node -> index)
				break ;
			position++;
			node = node -> next;
		}
		mid = size / 2;
		if (mid < position)
		{
			while (0 < size - position)
			{
				ft_reverse_rotate_b(deque_b);
				top = deque_b -> head -> index;
				position++;
			}
			ft_push_a(deque_a, deque_b);
			size--;
		}
		else if (mid >= position)
		{
			while (0 < position)
			{
				ft_rotate_b(deque_b);
				top = deque_b -> head -> index;
				position--;
			}
			ft_push_a(deque_a, deque_b);
			size--;
		}
	}
}
