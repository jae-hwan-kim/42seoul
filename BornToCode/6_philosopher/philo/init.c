#include "philo.h"

void    init_param(t_philo *philo, char **av)
{
    philo->philosopher = philo_atoi(av[1]);
    philo->time_to_die = philo_atoi(av[2]);
    philo->time_to_eat = philo_atoi(av[3]);
    philo->time_to_sleep = philo_atoi(av[4]);
    if (0 != av[5])
        philo->must_eat = philo_atoi(av[5]);
    else
        philo->must_eat = 0;
}