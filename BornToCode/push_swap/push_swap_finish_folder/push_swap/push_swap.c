/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:53:41 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:53:42 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_deque *deque_a, t_deque *deque_b)
{
	int	size;

	size = deque_a -> size;
	if (check_sorting(deque_a))
		return ;
	else if (size <= 3 || size == 5)
		sort_small_size(deque_a, deque_b, size);
	else
	{
		a_to_b(deque_a, deque_b);
		b_to_a(deque_a, deque_b);
	}
}
