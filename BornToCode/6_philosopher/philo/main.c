#include "philo.h"

int main(int ac, char **av)
{
    t_all *program;

    program = (t_all *)malloc(sizeof(t_all));
    if (0 == program)
        return (0);
    if (check_param(ac, av))
    {
        printf("before init function\n");
        init(program, av);
        // print_philo(program);  
    }
    return (0);
}