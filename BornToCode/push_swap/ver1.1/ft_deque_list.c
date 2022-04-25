#include "push_swap.h"

// t_node	*ft_lstnew(int value)
// {
// 	t_node	*n_list;

// 	n_list = (t_node *)malloc(sizeof(t_node));
// 	if (n_list == 0)
// 		return (0);
// 	n_list -> value = value;
// 	n_list -> next = 0;
// 	return (n_list);
// }

t_deque *ft_deqnew(t_deque *lst)
{
    lst = (t_deque *)malloc(sizeof(t_deque));
    if (lst == 0)
        return (0);
    lst -> size = 0;
    lst -> head = 0;
    lst -> tail = 0;
    return (lst);
    
}

void    ft_deqadd_head(t_deque *deque, t_node *node_a)
{
    // if (deque == 0 || node_a == 0)
    // {
    //     //clear 예외조건 필요
    // }
    deque->head = node_a;
}

void    ft_deqadd_tail(t_deque *deque, t_node *node_a)
{
    // if (deque == 0 || node_a == 0)
    // {
    //     //clear 예외조건 필요
    // }
    deque->tail = ft_lstlast(node_a);
}