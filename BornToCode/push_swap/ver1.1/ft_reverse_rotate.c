#include "push_swap.h"

void	ft_reverse_rotate_a(t_deque *deque_a)
{
	t_node	*node_a;

	if (deque_a -> head == deque_a -> tail)
		return ;
	node_a = deque_a -> tail;
	deque_a -> tail = node_a -> prev;
	node_a -> prev -> next = 0;
	node_a -> prev = 0;
	deque_a -> head -> prev = node_a;
	node_a -> next = deque_a -> head;
	deque_a -> head = node_a;

	ft_printf("rra\n");
	// print_node(deque_a);
}

void	ft_reverse_rotate_b(t_deque *deque_b)
{
	t_node	*node_b;

	if (deque_b -> head == deque_b -> tail)
		return ;
	node_b = deque_b -> tail;
	deque_b -> tail = node_b -> prev;
	node_b -> prev -> next = 0;
	node_b -> prev = 0;
	deque_b -> head -> prev = node_b;
	node_b -> next = deque_b -> head;
	deque_b -> head = node_b;

	ft_printf("rrb\n");
}

void	ft_reverse_rotate_ab(t_deque *deque_a, t_deque *deque_b)
{
    ft_reverse_rotate_a(deque_a);
    ft_reverse_rotate_b(deque_b);
}