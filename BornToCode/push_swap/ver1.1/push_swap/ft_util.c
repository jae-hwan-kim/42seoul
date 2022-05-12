#include "push_swap.h"

void	check_range(long long number)
{
	if (-2147483648 > number || 2147483647 < number)
	{
		printf("Error\n");
		exit(1);
	}
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

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
		result = result * 10 + (str[i] - '0');
		i++;
	}
	check_range(result * sign);
	return (result * sign);
}