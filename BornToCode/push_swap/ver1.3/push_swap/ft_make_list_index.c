/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_list_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimjaehwan <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:14:32 by kimjaehwa         #+#    #+#             */
/*   Updated: 2022/05/13 15:18:30 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_make_index(t_node *node_a)
{
	int		count;
	int		i;
	t_node	*checker;
	t_node	*first_node_a;
	t_node	*a;

	i = 0;
	checker = node_a;
	first_node_a = node_a;
	a = node_a;
	while (node_a)
	{
		count = 0;
		while (checker)
		{
			if (node_a->value > checker->value)
				count++;
			checker = checker->next;
		}
		node_a -> index = count;
		node_a = node_a -> next;
		checker = first_node_a;
	}
	node_a = 0;
}

void	ft_make_list(int *av, t_deque *deque_a, t_node **node_a)
{
	int	i;

	i = 1;
	while (i <= av[0])
	{
		ft_lstadd_back(node_a, ft_lstnew(av[i]));
		i++;
	}
	deque_a->head = *node_a;
	deque_a->tail = ft_lstlast(*node_a);
	deque_a->size = ft_lstsize(*node_a);
}

void	ft_make_list_index(int *av, t_deque *deque_a, t_node *node_a)
{
	ft_make_list(av, deque_a, &node_a);
	ft_make_index(node_a);
}
