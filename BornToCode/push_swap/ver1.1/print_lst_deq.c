#include "push_swap.h"

//값이 없을 경우 출력 방지하기

void	print_node(t_node node)
{
	t_node	*curr;

	curr = &node;
	printf ("++++++++++오퍼레이션 작동 후, prev 및 next 디버깅++++++++++++\n");
	while (curr)
	{
		if (curr -> prev == 0)
		{
			printf("첫 노드\n");
			printf("값 : %d, 인덱스 : %d //", curr -> value, curr -> index);
			printf("이후 값 : %d, 이후 인덱스 : %d\n", curr -> next -> value, curr -> next -> index);
			printf("-----------시작----------");
		}
		else if (curr -> prev != 0)
		{
			printf("이전 값 : %d, 이전 인덱스 : %d //", curr -> prev -> value, curr -> prev -> index);
			printf("값 : %d, 인덱스 : %d //", curr -> value, curr -> index);
			printf("이후 값 : %d, 이후 인덱스 : %d\n", curr -> next -> value, curr -> next -> index);
			printf("^^^^^^^^^^^^^^^^^^^^^\n");
		}
		curr = curr -> next;
	}
}

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
