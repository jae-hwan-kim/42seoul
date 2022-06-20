#include "philo.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '+')
		i++;
	while (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		if (result * sign > 2147483647)
			return (-1);
		else if (result * sign < -2147483648)
			return (0);
		else
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int check_param(int ac, char **av)
{
    if (check_ac(ac))
        if (check_av(ac, av))
            return (1);
    return (0);
}

void    init_param(t_philo *philo, int ac, char **av)
{
    philo->philosopher = ft_atoi(av[1]);
    philo->time_to_die = ft_atoi(av[2]);
    philo->time_to_eat = ft_atoi(av[3]);
    philo->time_to_sleep = ft_atoi(av[4]);
    if (0 != av[5])
        philo->must_eat = ft_atoi(av[5]);
    else
        philo->must_eat = 0;
}

void    print_philo(t_philo *philo)
{
    printf("num of philosopher : %d\n", philo->philosopher);
    printf("       time_to_die : %d\n", philo->time_to_die);
    printf("       time_to_eat : %d\n", philo->time_to_eat);
    printf("     time_to_sleep : %d\n", philo->time_to_sleep);
    printf("          must_eat : %d\n", philo->must_eat);
}

int main(int ac, char **av)
{
    t_philo *philo;

    philo = (t_philo *)malloc(sizeof(t_philo));
    if (check_param(ac, av))
    {
        init_param(philo, ac, av);
        print_philo(philo);  
    }
    return (0);
}