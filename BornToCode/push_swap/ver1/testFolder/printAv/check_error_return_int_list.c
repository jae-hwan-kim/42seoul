#include "push_swap.h"
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	ft_atoi_remix(const char *str, long long *value)
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
	printf("%lld\n", *value);
	if (-2147483648 > *value || *value > 2147483647)
		return (-1);
	return (0);
}

int check_same_number(char **av, int check)
{
    int index;

    index = 0;
    while (index < check)
    {
        if (av[index] == av[check])
            return (-1);
        index++;
    }
    return (0);
}

int *check_error_return_int_list(char **av, int *list)
{
	int *tmp;
    int avIndex;
    int listIndex;
    int checkSameNumber;
	long long convertInt;

    avIndex = 1;
    listIndex = 0;
	while (av[avIndex] != NULL)
		avIndex++;
	tmp = malloc((avIndex) * sizeof(int));
	avIndex = 1;
	listIndex = 0;
    while (0 != av[avIndex])
    {
        convertInt = ft_atoi_remix(av[avIndex], &convertInt);
        checkSameNumber = check_same_number(av, avIndex);
		//너무 길다... checkerror 와 int_list로 바꾸자
        if (convertInt == -1 || checkSameNumber == -1)
        {
            ft_putstr_fd("Error", 2);
            write(1,"\n", 1);
            return (0);
        } else {
            tmp[listIndex++] = convertInt;
			avIndex++;
        }
    }
    tmp[listIndex] = '\0';
	list = tmp;
	free (tmp);
    return (list);
}