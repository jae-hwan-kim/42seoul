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

void	ft_deq_init(t_deque **deque_a, t_deque **deque_b)
{
	*deque_a = ft_deqnew(*deque_a);
	*deque_b = ft_deqnew(*deque_b);
}