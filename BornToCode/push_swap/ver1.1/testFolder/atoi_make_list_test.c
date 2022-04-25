#include <stdio.h>
#include <stdlib.h>

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
			return (0);
		else if (result * sign < -2147483648)
			return (0);
		else
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int *check_error_return_list(char **av, int *list)
{
	//int *tmp;
	int avIndex;
	int	listIndex;
    int convertInt;
    int checkSameNumber;

    avIndex = 0;
	listIndex = 0;
	while (av[avIndex] != 0)
		avIndex++;
    list = malloc((avIndex) * sizeof(int));
	avIndex = 1;
	listIndex = 0;
    while (0 != av[avIndex])
    {
        convertInt = ft_atoi(av[avIndex]);
        list[listIndex] = convertInt;
		printf("tmp = %d\n", list[listIndex]);
		avIndex++;
		listIndex++;
    }
    list[listIndex] = '\0';
	// list = tmp;
	// free (tmp);
    return (list);
}

int main(int ac, char **av)
{
    int *list;
	int length = 0;
	
	if (1 >= ac)
        return (0);
    list = check_error_return_list(av, list);
	printf("main\n");
	printf("list = %d\n", list[0]);
	printf("list = %d\n", list[1]);
	printf("list = %d\n", list[2]);
	printf("list = %d\n", list[3]);
	while (list[length] != 0)
		length++;
	printf("length = %d\n", length);
	for (int i = 0; i < length; i++)
		printf("list[%d] = %d\n", i, list[i]);
	system("leaks -l atoi_list_test");
    return (0);
}