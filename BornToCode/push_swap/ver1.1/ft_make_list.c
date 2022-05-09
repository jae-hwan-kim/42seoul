#include "push_swap.h"

void	ft_make_list(int *av, t_deque *deque_a, t_node **node_a)
{
	int i;
	
	i = 0;
	while (0 != av[i])
	{
		ft_lstadd_back(node_a, ft_lstnew(av[i]));
		i++;
	}
	// check_same_number(node_a);
	deque_a->head = *node_a;
	deque_a->tail = ft_lstlast(*node_a);
	deque_a->size = ft_lstsize(*node_a);
}

// void	check_same_number(t_node **node_a)
// {
// 	t_node	*curr;
// 	t_node	*node;

// 	curr = *node_a;
// 	while (curr)
// 	{

// 		curr = curr -> next;
// 	}
// }

int	ft_lstsize(t_node *lst)
{
	int	i;

	i = 0;
	if (0 == lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_renew_lstsize(t_deque *deque_a, t_deque *deque_b)
{
	deque_a->size = ft_lstsize(deque_a->head);
	deque_b->size = ft_lstsize(deque_b->head);
}
