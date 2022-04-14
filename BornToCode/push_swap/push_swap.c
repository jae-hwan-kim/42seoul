#include "push_swap.h"

// void    ft_swap()
// {
//     ft_sa();
//     ft_sb();
//     ft_ss();
// }

// void    ft_push()
// {
//     ft_pa();
//     ft_pb();
// }

// void    ft_rotate()
// {
//     ft_ra();
//     ft_rb();
//     ft_rr();
// }

// void    ft_reverse_rotate()
// {
//     ft_rra();
//     ft_rrb();
//     ft_rrr();
// }

// void    push_swap()
// {
//     ft_swap();
//     ft_push();
//     ft_rotate();
//     ft_reverse_rotate();
// }

int main(int ac, char **av)
{
    int *list;

    list = check_error_return_int_list(av, list);
    if (1 >= ac || NULL == list)
        return (0);
    push_swap(list);
    return (0);
}