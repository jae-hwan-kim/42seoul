#include "push_swap.h"
	// 1.
	// top ≤ num
	// b로 넘깁니다.
	// pb 1회   num++ 
	// 2.
	// num < top ≤ num + chunk
	// b로 넘기고 넘긴값을 바닥으로 돌립니다 
	// pb 1회
	// rb를 1회
	// num++
	// 3.
	// num + chunk< top
	// a의 맨 밑으로 넣습니다
	// ra 1회.
void	a_to_b(t_deque *deque_a, t_deque *deque_b)
{
	int	top;
	int	size;
	int	num;
	int	chunk;

	size = deque_a->size;
	num = 0;
	chunk = (0.000000053 * size * size) +  (0.03 * size) + 14.5;
	while (0 < size)
	{
		top = deque_a->head->index;
		if (top <= num)
		{
			printf("top : %d\n", top);
			ft_push_b(deque_a, deque_b);
			num++;
		}
		else if (num < top && top <= num + chunk)
		{
			printf("top : %d\n", top);
			ft_push_b(deque_a, deque_b);
			ft_rotate_b(deque_b);
			num++;
		}
		else if (num + chunk < top)
		{
			printf("top : %d\n", top);
			ft_rotate_a(deque_a);
		}
		size--;
	}
}

void	b_to_a(t_deque *deque_a, t_deque *deque_b)
{
	int	top;
	int	mid;
	int	b_size;
	int	position;
	t_node *node;
	
	node = deque_b -> head;
	top = deque_b->head->index;
	b_size = deque_b->size;
	while (0 < b_size)
	{
		position = 0;
		while (0 != node)
		{
			if (b_size - 1 == node -> index)
				break;
			position++;
			node = node ->next;
		}
		mid = b_size / 2;
		if (mid < position)
		{
			if (top == position)
				ft_push_a(deque_a, deque_b);
			else
				ft_reverse_rotate_b(deque_b);
		}
		else if (mid >= position)
		{
			if (top == position)
				ft_push_a(deque_a, deque_b);
			else
				ft_rotate_b(deque_b);
		}
		b_size--;
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