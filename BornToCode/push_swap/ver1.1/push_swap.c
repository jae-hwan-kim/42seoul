#include "push_swap.h"
#include <stdio.h>
#include <string.h>

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

void print_stack(int *first_stack, int *second_stack)
{
    int index;

    index = 0;
    while (0 != first_stack[index] && 0 != second_stack[index])
    {
        write(1, &first_stack[index], 1);
        write(1, &second_stack[index], 1);
        write(1, "\n", 1);
    }
    write(1, "-\n", 2);
    write(1, "a", 1);
}

void make_int_array(char **av, int *first_stack)
{
    int index;

    index = 0;
    while (0 != av[index])
    {
        first_stack[index] = ft_atoi(av[index]);
    }
}

int main(int ac, char **av)
{
    int *first_stack;
    int *second_stack;

    //check_error(av);
    make_int_array(av, first_stack);
    print_stack(first_stack, second_stack);
    // push_swap(first_stack);
    return (0);
}