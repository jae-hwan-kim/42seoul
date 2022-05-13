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
			if (top == position)
			{
				ft_push_a(deque_a, deque_b);
				size--;
			}
			else
				ft_reverse_rotate_b(deque_b);
		}
		else if (mid >= position)
		{
			if (top == position)
			{
				ft_push_a(deque_a, deque_b);
				size--;
			}
			else
				ft_rotate_b(deque_b);
		}
	}
}

void	push_swap(t_deque *deque_a, t_deque *deque_b)
{
	a_to_b(deque_a, deque_b);
	printf("\n __a__ \n");
	print_lst_deq(deque_a);
	printf("\n __b__ \n");
	print_lst_deq(deque_b);
	b_to_a(deque_a, deque_b);
	printf("\n __a__ \n");
	print_lst_deq(deque_a);
	printf("\n __b__ \n");
	print_lst_deq(deque_b);
	// print_all(deque_a, deque_b);
}