#include "philo.h"

int main(int ac, char **av)
{
    t_all *program;
    int i = 0;

    program = (t_all *)malloc(sizeof(t_all));
    if (0 == program)
        return (0);
    if (check_param(ac, av))
    {
        init_and_have_meal(program, av, ac);
        while (i < program->number_of_philo)
        {
            pthread_join(program->philos->tid[i], NULL);
            i++;
        }
        print_all_param(program, av);
    }
    // system("leaks philo");
    return (0);
}