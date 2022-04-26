#include "push_swap.h"

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