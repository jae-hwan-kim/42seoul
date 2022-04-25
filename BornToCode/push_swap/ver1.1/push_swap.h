#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

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

t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstnew(int value);
t_deque *ft_deqnew(t_deque *lst);
int	    ft_atoi(const char *str);
int     ft_lstsize(t_node *lst);
void	ft_lstadd_back(t_node **lst, t_node *new);
void    ft_deqadd_tail(t_deque *deque, t_node *node_a);
void    ft_deqadd_head(t_deque *deque, t_node *node_a);
//int *check_error_return_int_list(char **av, int *list);

#endif