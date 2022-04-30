#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str, long long *value)
{
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '+')
		i++;
	while (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			*value = *value * 10 + (str[i] - '0');
			i++;
		}
		else
			return (-1);
	}
	*value *= sign;
	if (-2147483648 > *value || *value > 2147483647)
		return (-1);
	printf("2.value = %lld\n", *value);
	return (1);
}

int *check_error_return_int_list(char *nb)
{
    long long convertInt;

	convertInt = 0;
	printf("1.convertInt = %lld\n", convertInt);
	if (ft_atoi(nb, &convertInt) == -1)
	{
		printf("Not Int\n");
		return (0);
	}
	printf("3.convertInt = %lld\n", convertInt);
    return (0);
}

int	main(int ac, char **av)
{
	//av[1] = "2147483648";
	// char *num = "2147483648";
	(void) ac;
	check_error_return_int_list(av[1]);
	//printf("%d\n", atoi(num));
	return (0);
}