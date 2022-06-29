#include "philo.h"
// ./philo [철학자 수] [죽는 시간] [식사 시간] [자는 시간] [최대 식사 횟수]
void    init_all(t_all *program, char **av)
{
    program->number_of_fork = philo_atoi(av[1]);
    program->number_of_philo = philo_atoi(av[1]);
    program->philo = (t_philo *)malloc(sizeof(t_philo));
    if (0 == program->philo)
        exit(1);
    program->mutex = (t_mutex *)malloc(sizeof(t_mutex));
    if (0 == program->mutex)
        exit(1);
    program->meal = (t_meal *)malloc(sizeof(t_meal));
    if (0 == program->meal)
        exit(1);
}

void    init_mutex(t_mutex *mutex)
{
    printf("in init_mutex function\n");
    mutex->mutex_lock = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
    pthread_mutex_init(mutex->mutex_lock, NULL);
    if (0 == mutex->mutex_lock)
    {
        printf("mutex_lock malloc 실패");
        exit(1);
    }
    if (0 != pthread_mutex_init(mutex->mutex_lock, NULL))
    {
        printf("mutex 생성 실패\n");
        exit(1);
    }
    printf("mutex 생성 성공\n");
    printf("mutex wnth %p\n", mutex->mutex_lock);
}

void    init_meal(t_meal *meal, char **av)
{
    meal->tt_die = philo_atoi(av[2]);
    meal->tt_eat = philo_atoi(av[3]);
    meal->tt_sleep = philo_atoi(av[4]);
    meal->max_times_of_eat = philo_atoi(av[5]);
}

// void    init_philo(t_philo *philo, char **av)
// {

// }

void    init(t_all *program, char **av)
{
    init_all(program, av);
    printf("before init mutex\n");
    init_mutex(program->mutex);
    printf("before init meal\n");
    init_meal(program->meal, av);
    printf("mutex wnth %p\n", program->mutex->mutex_lock);
    // init_philo(program, av);
}