#include "philo.h"

int main(int ac, char **av)
{
    t_philo *philo;

    philo = (t_philo *)malloc(sizeof(t_philo));
    if (check_param(ac, av))
    {
        init_param(philo, av);
        print_philo(philo);  
    }
    return (0);
}