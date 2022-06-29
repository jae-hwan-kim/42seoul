#include "philo.h"

int	philo_atoi(const char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		if (result > 2147483647)
			return (-1);
		else
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
