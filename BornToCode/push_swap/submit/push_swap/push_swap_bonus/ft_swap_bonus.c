/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:51:26 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:51:28 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_a(t_deque *deque_a)
{	
	t_node	*curr;

	if (0 == deque_a -> size)
		return ;
	curr = deque_a -> head;
	curr -> next -> prev = 0;
	curr -> prev = curr -> next;
	curr -> next -> next -> prev = curr;
	curr -> next = curr -> next -> next;
	curr -> prev -> next = curr;
	deque_a -> head = curr -> prev;
}

void	ft_swap_b(t_deque *deque_b)
{	
	t_node	*curr;

	if (0 == deque_b -> size)
		return ;
	curr = deque_b -> head;
	curr -> next -> prev = 0;
	curr -> prev = curr -> next;
	curr -> next -> next -> prev = curr;
	curr -> next = curr -> next -> next;
	curr -> prev -> next = curr;
	deque_b -> head = curr -> prev;
}

void	ft_swap_ab(t_deque *deque_a, t_deque *deque_b)
{
	ft_swap_a(deque_a);
	ft_swap_b(deque_b);
}
