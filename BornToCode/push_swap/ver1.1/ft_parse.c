#include "push_swap.h"

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
	return (result);
}