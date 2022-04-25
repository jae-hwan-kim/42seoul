#include "push_swap.h"

t_node	*ft_lstnew(int value)
{
	t_node	*n_list;

	n_list = (t_node *)malloc(sizeof(t_node));
	if (n_list == 0)
		return (0);
	n_list -> value = value;
	n_list -> next = 0;
	return (n_list);
}

int	ft_lstsize(t_node *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_node	*ft_lstlast(t_node *lst)
{
	if (lst == 0)
		return (0);
	while ((lst->next) != 0)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*curr;

	if (new == 0)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	new->next = 0;
}