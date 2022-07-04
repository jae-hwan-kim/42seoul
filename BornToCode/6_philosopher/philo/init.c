#include "philo.h"
// ./philo [철학자 수] [죽는 시간] [식사 시간] [자는 시간] [최대 식사 횟수]
void    init_all(t_all *program, char **av)
{
    program->number_of_fork = philo_atoi(av[1]);
    program->number_of_philo = philo_atoi(av[1]);
    program->philos = (t_philos *)malloc(sizeof(t_philos));
    if (0 == program->philos)
        error(MALLOC, "d");
    program->mutex = (t_mutex *)malloc(sizeof(t_mutex));
    if (0 == program->mutex)
        error(MALLOC, "mutex\n");
    program->meal = (t_meal *)malloc(sizeof(t_meal));
    if (0 == program->meal)
        error(MALLOC, "meal\n");
}

void    init_mutex(t_mutex *mutex)
{
    mutex->mutex_lock = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
    if (0 == mutex->mutex_lock)
        error(MALLOC, "mutex\n");
    if (0 != pthread_mutex_init(mutex->mutex_lock, NULL))
        error(MUTEX, "mutex\n");
}

void    init_meal(t_meal *meal, char **av, int ac)
{
    meal->tt_die = philo_atoi(av[2]);
    meal->tt_eat = philo_atoi(av[3]);
    meal->tt_sleep = philo_atoi(av[4]);
    if (ac == 6)    
        meal->max_times_of_eat = philo_atoi(av[5]);
    else
        meal->max_times_of_eat = 0;
}

void    *have_a_meal(void *temp)
{
    t_all *program;

    program = (t_all *)temp;
    program->philos->times_of_eat[program->philos->index] = 0;
    program->philos->philo[program->philos->index] = THINKING;
    print_philo(temp);
    (program->philos->index)++;
    // pthread_mutex_lock(temp->mutex->mutex_lock);
    // pthread_mutex_unlock(temp->mutex->mutex_lock);
    return (0);
}

void    init_philo_and_have_meal(t_all *program)
{
    int         number;
    int         i;
    t_philos    *philos;

    number = program->number_of_philo;
    philos = program->philos;
    philos->tid = (pthread_t *)malloc(sizeof(pthread_t) * number);
    if (0 == philos->tid)
        error(MALLOC, "tid\n");
    philos->philo = (long *)malloc(sizeof(long) * number);
    if (0 == philos->philo)
        error(MALLOC, "philo\n");
    philos->times_of_eat = (int *)malloc(sizeof(int) * number);
    if (0 == philos->times_of_eat)
        error(MALLOC, "times_of_eat\n");
    philos->index = 0;
    i = philos->index;
    while (i < number)
    {
        if (pthread_create(&(philos->tid[philos->index]), NULL, have_a_meal, (void *)program))
            error(THREAD, "thread");
        //스레드 생성됐는지 확인하는 코드, 생성 안됐으면 기다렸다가 생성하기
        if (i + 1 != philos->index)
            usleep(100);
        i++;
    }
}

void    init_and_have_meal(t_all *program, char **av, int ac)
{
    init_all(program, av);
    init_mutex(program->mutex);
    init_meal(program->meal, av, ac);
    init_philo_and_have_meal(program);
}