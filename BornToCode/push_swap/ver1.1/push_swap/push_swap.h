#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

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

void	push_swap(t_deque *deque_a, t_deque *deque_b);
int	    ft_printf(const char *argu, ...);
int	    ft_atoi(const char *str);
char	**ft_split(char **av);
size_t	ft_strlen(const char *str);

int	    check_null(char **av);
int	    check_spaces(char **av);
int	    check_digit(char **av);
int	    check_sign(char **av);
int	    check_error(char **av);
int	    *check_error_and_split(int ac, char **av);

void	ft_make_list(int *av, t_deque *deque_a, t_node **node_a);
void	ft_make_index(t_node *node_a);
void	ft_make_list_index(int *av, t_deque *deque_a, t_node *node_a);

int     ft_lstsize(t_node *lst);
void	ft_renew_lstsize(t_deque *deque_a, t_deque *deque_b);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_deq_init(t_deque **deque_a, t_deque **deque_b);
void    ft_deqadd_tail(t_deque *deque, t_node *node_a);
void    ft_deqadd_head(t_deque *deque, t_node *node_a);

void	print_lst_deq(t_deque *deque);
void	print_node(t_node *node);
void	print_all(t_deque *deque_a, t_deque *deque_b);

void	ft_swap_a(t_deque *deque_a);
void	ft_swap_b(t_deque *deque_b);
void	ft_swap_ab(t_deque *deque_a, t_deque *deque_b);

void    ft_push_a(t_deque *deque_a, t_deque *deque_b);
void	ft_push_b(t_deque *deque_a, t_deque *deque_b);

void	ft_rotate_a(t_deque *deque_a);
void	ft_rotate_b(t_deque *deque_b);
void	ft_rotate_ab(t_deque *deque_a, t_deque *deque_b);

void	ft_reverse_rotate_a(t_deque *deque_a);
void	ft_reverse_rotate_b(t_deque *deque_b);
void	ft_reverse_rotate_ab(t_deque *deque_a, t_deque *deque_b);

void	a_to_b(t_deque *deque_a, t_deque *deque_b);
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstnew(int value);
t_deque *ft_deqnew(t_deque *lst);

#endif
