#include "push_swap.h"

//값이 없을 경우 출력 방지하기
void	print_lst(t_deque *deque)
{
	t_node	*curr;

	curr = deque->head;
	while (curr)
	{
		printf("value : %d, index %d\n", curr -> value, curr -> index);
		curr = curr -> next;
	}
}

void	print_deq(t_deque *deque)
{
	printf("deq -> head -> value [%d] : index %d : size %d\n", deque -> head -> value, deque -> head -> index, deque -> size);
	printf("deq -> tail -> value [%d] : index %d : size %d\n", deque -> tail -> value, deque -> tail -> index, deque -> size);
	printf("-----------------\n");
}

void	print_lst_deq(t_deque *deque)
{
	if (deque->head == 0)
	{
		printf("값이 없습니다\n");
        return ;
	}
	print_lst(deque);
	print_deq(deque);
}
