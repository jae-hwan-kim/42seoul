#include "push_swap.h"

void	a_to_b(t_deque *deque_a, t_deque *deque_b)
{
	int	top;
	int	size;
	int	num;
	int	chunk;

	size = deque_a->size;
	num = 0;
	// chunk = (0.000000053 * size * size) +  (0.03 * size) + 14.5;
	chunk = 23;
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
	}
}

int	check_sorting(t_deque *deque_a)
{
	t_node	*node;
	int	check_index;

	node = deque_a -> head;
	check_index = deque_a->head->index;
	while (0 != node)
	{
		if (check_index != node -> index)
			return (0);
		node = node -> next;	
		check_index++;
	}
	return(1);
}

void	sort_small_size(t_deque *deque_a, t_deque *deque_b, int size)
{
	int	position;
	t_node	*node;

	node = deque_a->head;
	position = 0;
	if (size == 2)
		ft_rotate_a(deque_a);
	else if (size == 3)
	{
		while (2 != deque_a->tail->index)
			ft_rotate_a(deque_a);
		if (check_sorting(deque_a))
			return ;
		else
			ft_swap_a(deque_a);
	}
	else if (size == 5)
	{
		while (node -> index)
		{
			position++;
			node = node -> next;
		}
		if (2 < position)
			while (deque_a->head->index)
				ft_reverse_rotate_a(deque_a);
		else if (2 >= position)
			while (deque_a->head->index)
				ft_rotate_a(deque_a);		
		ft_push_b(deque_a, deque_b);
		while (1 != deque_a->head->index)
			ft_rotate_a(deque_a);
		ft_push_b(deque_a, deque_b);
		while (4 != deque_a->tail->index)
			ft_rotate_a(deque_a);
		if (!check_sorting(deque_a))
			ft_swap_a(deque_a);
		ft_push_a(deque_a, deque_b);
		ft_push_a(deque_a, deque_b);
	}
}

void	push_swap(t_deque *deque_a, t_deque *deque_b)
{
	//인자가 1개일 때, 2, 3, 4, 5 일 때
	int	size;

	size = deque_a ->size;
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