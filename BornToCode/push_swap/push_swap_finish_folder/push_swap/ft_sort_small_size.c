/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:47:33 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:49:36 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_size_three(t_deque *deque_a)
{
	while (2 != deque_a -> tail -> index)
		ft_rotate_a(deque_a);
	if (check_sorting(deque_a))
		return ;
	else
		ft_swap_a(deque_a);
}

void	sort_size_five(t_deque *deque_a, t_deque *deque_b, int *position)
{
	if (2 < *position)
		while (deque_a -> head -> index)
			ft_reverse_rotate_a(deque_a);
	else if (2 >= *position)
		while (deque_a -> head -> index)
			ft_rotate_a(deque_a);
	ft_push_b(deque_a, deque_b);
	while (1 != deque_a -> head -> index)
		ft_rotate_a(deque_a);
	ft_push_b(deque_a, deque_b);
	while (4 != deque_a -> tail -> index)
		ft_rotate_a(deque_a);
	if (!check_sorting(deque_a))
		ft_swap_a(deque_a);
	ft_push_a(deque_a, deque_b);
	ft_push_a(deque_a, deque_b);
}

void	sort_small_size(t_deque *deque_a, t_deque *deque_b, int size)
{
	int		position;
	t_node	*node;

	node = deque_a -> head;
	position = 0;
	if (size == 2)
		ft_rotate_a(deque_a);
	else if (size == 3)
		sort_size_three(deque_a);
	else if (size == 5)
	{
		while (node -> index)
		{
			position++;
			node = node -> next;
		}
		sort_size_five(deque_a, deque_b, &position);
	}
}
