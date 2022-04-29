#include "push_swap.h"

void	ft_reverse_rotate_a(t_deque *deque_a)
{
	t_node	*node_a;

	if (deque_a -> head == deque_a -> tail)
		return ;
	node_a = deque_a -> tail;
	deque_a -> tail = node_a -> prev;
	node_a -> prev -> next = 0;
	node_a -> prev = 0;
	deque_a -> head -> prev = node_a;
	node_a -> next = deque_a -> head;
	deque_a -> head = node_a;

	printf("rra\n");
}

int	main(int ac, char **av)
{
	t_node	*node_a;
	t_node	*node_b;
    t_deque	*deque_a;
	t_deque	*deque_b;
	int	i;

	//check_error(av);
	i = 0;
	node_a = 0;
	node_b = 0;
	deque_a = ft_deqnew(deque_a);
	deque_b = ft_deqnew(deque_b);
	//연결리스트 만들기
	printf(">>>>>>>>>>>초기 덱 a 출력<<<<<<<<<<<\n");
    ft_make_list(av, deque_a, &node_a);
	ft_make_index(node_a);
	print_lst_deq(deque_a);

	//스왑하기
	// printf(">>>>>>>>>>>스왑 a 출력<<<<<<<<<<<\n");
	// ft_swap_a(deque_a);
	// print_lst_deq(deque_a);

	//푸시하기
	printf(">>>>>>>>>>>푸시 a, b 출력<<<<<<<<<<<\n");
	ft_push_b(deque_a, deque_b);
	ft_push_b(deque_a, deque_b);
	// ft_push_a(deque_a, deque_b);
	printf(">>>>>>>>>>>a<<<<<<<<<<<\n");
	print_lst_deq(deque_a);
	printf(">>>>>>>>>>>b<<<<<<<<<<<\n");
	print_lst_deq(deque_b);

	//로테이트하기
	// printf(">>>>>>>>>>>로테이트 a, b 출력<<<<<<<<<<<\n");
	// ft_rotate_ab(deque_a, deque_b);
	// printf(">>>>>>>>>>>a<<<<<<<<<<<\n");
	// print_lst_deq(deque_a);
	// printf(">>>>>>>>>>>b<<<<<<<<<<<\n");
	// print_lst_deq(deque_b);

	//리버스 로테이트
	printf(">>>>>>>>>>>리버스 로테이트 a, b 출력<<<<<<<<<<<\n");
	ft_reverse_rotate_a(deque_a);
	// ft_reverse_rotate_ab(deque_a, deque_b);
	printf(">>>>>>>>>>>a<<<<<<<<<<<\n");
	print_lst_deq(deque_a);
	printf(">>>>>>>>>>>b<<<<<<<<<<<\n");
	print_lst_deq(deque_b);

	// system("leaks a.out");
    return (0);
}
