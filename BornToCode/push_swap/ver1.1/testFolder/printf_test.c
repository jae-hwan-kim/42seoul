#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node
{
	int	            value;
    int             index;
	struct s_node	*prev;
	struct s_node	*next;
}                   t_node;

typedef struct s_deque
{
    int size;
    struct s_node   *head;
    struct s_node   *tail;
}                   t_deque;

int main(void)
{
    t_node *node_a;
    t_deque *deq_a;

    node_a = (t_node *)malloc(sizeof(t_node));
    deq_a = (t_deque *)malloc(sizeof(t_deque));
    node_a -> index = 1;
    node_a -> next = 0;
    node_a -> prev = 0;
    node_a -> value = 10;
    deq_a -> head = node_a;
    deq_a -> tail = node_a;
    deq_a -> size = 1;
    // int a = 10;
    // int b = 20;
    // int c = 30;

    printf("%d, %d\n", deq_a -> head -> value, deq_a -> head -> index);
    return (0);
}