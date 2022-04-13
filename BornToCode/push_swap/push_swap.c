#include <unistd.h>
#include <stdlib.h>

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

//정수가 아닐 경우, 정수의 범위보다 크거나 작을 경우, 중복될 경우 Error를 \n과 함께 출력한다.
//정수 예외처리를 어떻게 해야하는가?
int double_check(char **av, int check)
{
    int index;

    index = 0;
    while (index < check)
    {
        if (av[index] == av[check])
            return (1);
        index++;
    }
    return (0);
}

int check_error(int ac, char **av)
{
    int index;
    int checkAv;

    index = 0;
    if (1 > ac)
        return (0);
    while (0 != av[++index])
    {
        //ft_atoi에 Error 출력 추가하기
        checkAv = ft_atoi(av[index]); 
        if (!(-2147483648 <= checkAv && checkAv < 2147483647) || double_check(av, index))
        {
            ft_putstr("Error");
            return (0);
        }
    }
    return (1);
}

int main(int ac, char **av)
{
    if (check_error(ac, av) == 0)
        return (0);
    //push_swap();
    return (0);
}