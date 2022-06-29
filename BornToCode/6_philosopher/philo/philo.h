#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
// number_of_philosophers
// time_to_die(in milliseconds)
// time_to_eat(in milliseconds)
// time_to_sleep(in milliseconds)
// number_of_times_each_philosopher_must_eat (optional argument)
typedef enum condition
{
    SLEEPING,
    EATING,
    THINKING,
}   condition;

typedef struct  s_all
{
    static const int    number_of_fork;
    static const int    number_of_philo;
    t_philo             philo;
    t_mutex             mutex;
    t_meal              meal;
}   t_all;
// 해당 구조체를 통해 n명 철학자를 만들고, 상태 파악
typedef struct  s_philo
{
    static const int    index;
    int                 state;
    int                 times_of_eat;
}   t_philo;

typedef struct  s_mutex
{
    pthread_t       tid;
    pthread_mutex_t mutex_lock;
}   t_mutex;

typedef struct  s_meal
{
    static const int tt_die;
    static const int tt_eat;
    static const int tt_sleep;
    static const int max_times_of_eat;
}   t_meal;


void    init_param(t_philo *philo, char **av);

int check_param(int ac, char **av);
int check_ac(int ac);
int check_av(char **av);

void    print_philo(t_philo *philo);
int	philo_atoi(const char *str);

#endif
