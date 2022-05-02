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
	//바꿔야함.
	ft_printf("sa\n");
	// print_node(deque_a);
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
	//바꿔야함.
	ft_printf("sb\n");
}

void	ft_swap_ab(t_deque *deque_a, t_deque *deque_b)
{
	ft_swap_a(deque_a);
	ft_swap_b(deque_b);
	//바꿔야함.
	ft_printf("ss\n");
}
