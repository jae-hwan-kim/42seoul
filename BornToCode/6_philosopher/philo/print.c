#include "philo.h"

void    print_philo(t_philo *philo)
{
    printf("num of philosopher : %d\n", philo->philosopher);
    printf("       time_to_die : %d\n", philo->time_to_die);
    printf("       time_to_eat : %d\n", philo->time_to_eat);
    printf("     time_to_sleep : %d\n", philo->time_to_sleep);
    printf("          must_eat : %d\n", philo->must_eat);
}