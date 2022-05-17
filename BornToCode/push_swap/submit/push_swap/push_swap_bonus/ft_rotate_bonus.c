/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:52:41 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:52:43 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_a(t_deque *deque_a)
{
	t_node	*node_a;

	if (deque_a -> head == deque_a -> tail)
		return ;
	node_a = deque_a -> head;
	node_a -> prev = deque_a -> tail;
	deque_a -> tail -> next = node_a;
	deque_a -> head = node_a -> next;
	deque_a -> tail = node_a;
	deque_a -> head -> prev = 0;
	node_a -> next = 0;
}

void	ft_rotate_b(t_deque *deque_b)
{
	t_node	*node_b;

	if (deque_b -> head == deque_b -> tail)
		return ;
	node_b = deque_b -> head;
	node_b -> prev = deque_b -> tail;
	deque_b -> tail -> next = node_b;
	deque_b -> head = node_b -> next;
	deque_b -> tail = node_b;
	deque_b -> head -> prev = 0;
	node_b -> next = 0;
}

void	ft_rotate_ab(t_deque *deque_a, t_deque *deque_b)
{
	ft_rotate_a(deque_a);
	ft_rotate_b(deque_b);
}
