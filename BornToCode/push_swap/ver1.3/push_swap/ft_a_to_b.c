/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:46:29 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:46:34 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b_util(t_deque *deque_a, t_deque *deque_b, int *num, int chunk)
{
	int	top;

	top = deque_a -> head -> index;
	if (top <= *num)
	{
		ft_push_b(deque_a, deque_b);
		(*num)++;
	}
	else if (*num < top && top <= *num + chunk)
	{
		ft_push_b(deque_a, deque_b);
		ft_rotate_b(deque_b);
		(*num)++;
	}
	else if (*num + chunk < top)
		ft_rotate_a(deque_a);
}

void	a_to_b(t_deque *deque_a, t_deque *deque_b)
{
	int	size;
	int	num;
	int	chunk;

	size = deque_a -> size;
	num = 0;
	chunk = 23;
	while (num < size)
		a_to_b_util(deque_a, deque_b, &num, chunk);
}
