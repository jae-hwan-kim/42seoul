#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
// number_of_philosophers
// time_to_die(in milliseconds)
// time_to_eat(in milliseconds)
// time_to_sleep(in milliseconds)
// number_of_times_each_philosopher_must_eat (optional argument) -> 필로소퍼가 먹어야하는 횟수?

typedef struct s_philo
{
    int philosopher;
    int time_to_die;
    int time_to_eat;
    int time_to_sleep;
    int must_eat;
}   t_philo;


int check_ac(int ac);
int check_av(int ac, char **av);

#endif
