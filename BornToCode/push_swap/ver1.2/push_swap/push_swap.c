#include "push_swap.h"

void	a_to_b(t_deque *deque_a, t_deque *deque_b)
{
	int	top;
	int	size;
	int	num;
	int	chunk;

	size = deque_a->size;
	num = 0;
	chunk = (0.000000053 * size * size) +  (0.03 * size) + 14.5;
	while (num < size)
	{
		top = deque_a->head->index;
		if (top <= num)
		{
			ft_push_b(deque_a, deque_b);
			num++;
		}
		else if (num < top && top <= num + chunk)
		{
			ft_push_b(deque_a, deque_b);
			ft_rotate_b(deque_b);
			num++;
		}
		else if (num + chunk < top)
		{
			ft_rotate_a(deque_a);
		}
	}
}

void	b_to_a(t_deque *deque_a, t_deque *deque_b)
{
	int	top;
	int	mid;
	int	size;
	int	position;
	t_node *node;
	
	size = deque_b -> size;
	while (0 < size)
	{
		position = 0;
		node = deque_b -> head;
		top = deque_b->head->index;
		while (0 != node)
		{
			if (size - 1 == node -> index)
				break;
			position++;
			node = node ->next;
		}
		mid = size / 2;
		if (mid < position)
		{
			while (0 < size - position)
			{
				ft_reverse_rotate_b(deque_b);
				top = deque_b->head->index;
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
				top = deque_b->head->index;
				position--;
			}
			ft_push_a(deque_a, deque_b);
			size--;
		}
		print_lst_deq(deque_a);
	}
}

void	push_swap(t_deque *deque_a, t_deque *deque_b)
{
	a_to_b(deque_a, deque_b);
	print_lst_deq(deque_a);
	print_lst_deq(deque_b);
	b_to_a(deque_a, deque_b);
	print_lst_deq(deque_a);
	print_lst_deq(deque_b);
}