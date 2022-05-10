#include "push_swap.h"

void	parameter_compare(int *result)
{
	int	i;
	int	j;

	i = 0;
	while (0 != result[i])
	{
		j = i + 1;
		while (0 != result[j])
		{
			if (result[i] == result[j])
			{
				printf("Error\n");
				exit (1);
			}
			j++;
		}
		i++;
	}
}

int	*check_error_and_split(int ac, char **av)
{
	int		i;
	int		length;
	int		*result;
	char	**temp;

	if (ac <= 1)
		exit(0);
	else if (check_error(av))
	{
		printf("Error\n");
		exit (1);
	}
	else
		temp = ft_split(av);
	i = 0;
	while (temp[i])
		i++;
	length = i;
	result = (int *)malloc(sizeof(int) * (length + 1));
	i = 0;
	while (i < length)
	{
		result[i] = ft_atoi(temp[i]);
        free(temp[i]);
        temp[i] = 0;
		i++;
	}
	result[i] = 0;
    free(temp);
    temp = 0;
	parameter_compare(result);
	return (result);
}