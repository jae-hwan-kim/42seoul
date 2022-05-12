#include "push_swap.h"

void	print_node(t_node *node)
{
	t_node	*curr;

	if (node == 0 || node == 0)
	{
		printf("노드가 없습니다.\n");
		return ;
	}
	curr = node;
	printf ("++++++++++오퍼레이션 작동 후, prev 및 next 디버깅++++++++++++\n");
	while (curr)
	{
		if (curr -> prev == 0)
		{
			printf("-----------시작----------\n");
			printf("첫 노드\n");
			printf("이전 값 : -, 이전 인덱스 : - <-- ");
			printf("값 : %d, 인덱스 : %d --> ", curr -> value, curr -> index);
			if (curr -> next == 0)
			{
				printf("첫 번째이자 마지막 노드입니다.\n");
				return ;
			}	
			printf("이후 값 : %d, 이후 인덱스 : %d\n", curr -> next -> value, curr -> next -> index);
			printf("------------------------------------------------\n");
		}
		else if (curr -> prev != 0)
		{
			printf("이전 값 : %d, 이전 인덱스 : %d <-- ", curr -> prev -> value, curr -> prev -> index);
			printf("값 : %d, 인덱스 : %d --> ", curr -> value, curr -> index);
			if (curr -> next == 0)
				printf("마지막 노드입니다\n");
			else
			{			
				printf("이후 값 : %d, 이후 인덱스 : %d\n", curr -> next -> value, curr -> next -> index);
				printf("------------------------------------------------\n");
			}
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
		// printf("value : %d, index %d\n", curr -> value, curr -> index);
		printf("value : %d, ", curr -> value);
		printf("index %d\n", curr -> index);
		curr = curr -> next;
	}
}

void	print_deq(t_deque *deque)
{
	printf("deq -> head -> value [%d] : index [%d] : size [%d]\n", deque -> head -> value, deque -> head -> index, deque -> size);
	printf("deq -> tail -> value [%d] : index [%d] : size [%d]\n", deque -> tail -> value, deque -> tail -> index, deque -> size);
	printf("\n-----------------\n");
}

void	print_lst_deq(t_deque *deque)
{
	printf("+++++++++++++++++++++++++++++++\n\n");
	if (deque->head == 0)
	{
		printf("값이 없습니다\n");
        return ;
	}
	print_lst(deque);
	print_deq(deque);
}

void	print_all(t_deque *deque_a, t_deque *deque_b)
{
	printf("\n\n>>>>>>>>>>>a<<<<<<<<<<<\n");
	print_lst_deq(deque_a);
	printf("\n\n>>>>>>>>>>>b<<<<<<<<<<<\n");
	print_lst_deq(deque_b);
	// printf("\n\n***********Node_a************\n\n");
	// print_node(deque_a -> head);
	// printf("\n\n***********Node_b************\n\n");
	// print_node(deque_b -> head);
}