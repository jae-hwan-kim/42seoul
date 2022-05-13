/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimjaehwan <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:23:41 by kimjaehwa         #+#    #+#             */
/*   Updated: 2022/05/13 15:23:42 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_deque *deque_a)
{	
	t_node	*curr;

	curr = deque_a -> head;
	curr -> next -> prev = 0;
	curr -> prev = curr -> next;
	curr -> next -> next -> prev = curr;
	curr -> next = curr -> next -> next;
	curr -> prev -> next = curr;
	deque_a -> head = curr -> prev;
	ft_printf("sa\n");
}

void	ft_swap_b(t_deque *deque_b)
{	
	t_node	*curr;

	curr = deque_b -> head;
	curr -> next -> prev = 0;
	curr -> prev = curr -> next;
	curr -> next -> next -> prev = curr;
	curr -> next = curr -> next -> next;
	curr -> prev -> next = curr;
	deque_b -> head = curr -> prev;
	ft_printf("sb\n");
}

void	ft_swap_ab(t_deque *deque_a, t_deque *deque_b)
{
	ft_swap_a(deque_a);
	ft_swap_b(deque_b);
	ft_printf("ss\n");
}
