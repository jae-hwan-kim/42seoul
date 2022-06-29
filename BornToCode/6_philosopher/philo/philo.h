#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_philo
{
    int philosopher;
    int time_to_die;
    int time_to_eat;
    int time_to_sleep;
    int must_eat;
}   t_philo;

void    init_param(t_philo *philo, char **av);

int check_param(int ac, char **av);
int check_ac(int ac);
int check_av(char **av);

void    print_philo(t_philo *philo);
int	philo_atoi(const char *str);

#endif
