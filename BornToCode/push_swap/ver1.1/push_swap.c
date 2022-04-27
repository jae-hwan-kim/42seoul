#include "push_swap.h"

void	ft_push_b(t_deque *deque_a, t_deque *deque_b)
{
	t_node *top_a;
	t_node *top_b;

	if (deque_a -> head == 0 || deque_a -> tail == 0)
	{
		printf ("node_a가 없음\n");
		free (deque_a);
		return ;
	}
	top_a = deque_a -> head;
	top_b = deque_b -> head;
	// deque 해결하기
	deque_b -> head = top_a;
	if (deque_a -> head == deque_a -> tail) //a에 노드가 하나일 때
	{
		printf("a의 노드가 하나임(deque_a 의 head 와 tail이 같음)\n");
		deque_a -> head = 0;
		deque_a -> tail = 0;
	}
	if (deque_b -> head == 0 && deque_b -> tail == 0)
	{
		printf("b 에 요소가 없을 때");
		ft_lstadd_front(*top_b, top_a);
		return ;
	}
	//b에 요소가 있을 경우
	deque_a -> head = node_a -> next;
	node_a -> prev -> next = 0;
	// node_a 가 한개일 경우
	// node_b 에 아무것도 없을 경우
	// node_b 에 한 개 이상 있을 경우
	printf("pb\n");
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
    ft_make_list(av, deque_a, &node_a);
	ft_make_index(node_a);
	print_lst_deq(deque_a);

	//스왑하기
	ft_swap_a(deque_a);
	print_lst_deq(deque_a);

	//푸시하기
	ft_push_b(deque_a, deque_b);
	print_lst_deq(deque_a);
	print_lst_deq(deque_b);
	// system("leaks a.out");
    return (0);
}
