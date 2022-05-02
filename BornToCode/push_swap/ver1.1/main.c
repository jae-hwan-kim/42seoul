#include "push_swap.h"

void	push_swap(char **av, t_deque *deque_a, t_deque *deque_b, t_node *node_a)
{
	ft_printf("\n\n>>>>>>>>>>>초기 덱 a 출력<<<<<<<<<<<\n\n");
    ft_make_list(av, deque_a, &node_a);
	ft_make_index(node_a);
	print_lst_deq(deque_a);

	// //스왑하기
	// // printf(">>>>>>>>>>>스왑 a 출력<<<<<<<<<<<\n");
	// ft_swap_a(deque_a);
	// // print_lst_deq(deque_a);
	
	// //푸시하기
	// printf("\n\n>>>>>>>>>>>푸시 a, b 출력<<<<<<<<<<<\n\n");
	ft_push_b(deque_a, deque_b);
	ft_push_b(deque_a, deque_b);

	// //로테이트하기
	// // printf(">>>>>>>>>>>로테이트 a, b 출력<<<<<<<<<<<\n");
	// ft_rotate_ab(deque_a, deque_b);
	

	// //리버스 로테이트
	// // printf(">>>>>>>>>>>리버스 로테이트 a, b 출력<<<<<<<<<<<\n");
	// // ft_reverse_rotate_ab(deque_a, deque_b);
	print_all(deque_a, deque_b);
}

void	ft_init(t_deque **deque_a, t_deque **deque_b)
{
	*deque_a = ft_deqnew(*deque_a);
	*deque_b = ft_deqnew(*deque_b);
	ft_printf("init scope - a 덱 : %p, b 덱 : %p\n", deque_a, deque_b);
}

int	main(int ac, char **av)
{
	t_node	*node_a;
    t_deque	*deque_a;
	t_deque	*deque_b;
	(void) ac;
	int	i;

	//check_error(av);
	i = 0;
	node_a = 0;
	deque_a = 0;
	deque_b = 0;
	//덱 주소 출력하기
	ft_printf("바꾸기 전 - a 덱 : %p, b 덱 : %p\n", deque_a, deque_b);
	ft_init(&deque_a, &deque_b);
	ft_printf("바꾼 후 - a 덱 : %p, b 덱 : %p\n", &deque_a, &deque_b);
	push_swap(av, deque_a, deque_b, node_a);
	system("leaks push_swap");
    return (0);
}
