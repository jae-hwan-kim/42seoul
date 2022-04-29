#include "push_swap.h"

void	ft_push_a(t_deque *deque_a, t_deque *deque_b)
{
	t_node *node_b;

    if (deque_b -> head == 0)
        return ;
	node_b = deque_b->head;
	if (node_b->next)
	{
		(node_b->next)->prev = 0;
		deque_b->head = node_b->next;
	}
	else
	{
		deque_b->head = 0;
		deque_b->tail = 0;
	}
	node_b->next = deque_a->head;
	if (deque_a->head)
		(deque_a->head)->prev = node_b;
	deque_a->head = node_b;
	if (!deque_a->tail)
		deque_a->tail = node_b;
	printf("pa\n");
	// print_node(deque_a);
}

void	ft_push_b(t_deque *deque_a, t_deque *deque_b)
{
	t_node *node_a;

    if (deque_a -> head == 0)
        return ;
	node_a = deque_a->head;
	if (node_a->next)
	{
		(node_a->next)->prev = NULL;
		deque_a->head = node_a->next;
	}
	else
	{
		deque_a->head = NULL;
		deque_a->tail = NULL;
	}
	node_a->next = deque_b->head;
	if (deque_b->head)
		(deque_b->head)->prev = node_a;
	deque_b->head = node_a;
	if (!deque_b->tail)
		deque_b->tail = node_a;
	printf("pb\n");
}