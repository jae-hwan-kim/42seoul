#include "push_swap.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
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
		if (result * sign > 2147483647)
			return (NULL);
		else if (result * sign < -2147483648)
			return (NULL);
		else
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int check_same_number(char **av, int check)
{
    int index;

    index = 0;
    while (index < check)
    {
        if (av[index] == av[check])
            return (1);
        index++;
    }
    return (0);
}

int *check_error_return_int_list(char **av, int *list)
{
	int *tmp;
    int avIndex;
    int covertInt;
    int listIndex;
    int checkSameNumber;

    avIndex = 1;
    listIndex = 0;
	while (av[avIndex] != 0)
		avIndex++;
	tmp = malloc((avIndex) * sizeof(int));
	avIndex = 1;
	listIndex = 0;
    while (0 != av[avIndex])
    {
        covertInt = ft_atoi(av[avIndex]);
        checkSameNumber = check_same_number(av, avIndex);
		//너무 길다... checkerror 와 int_list로 바꾸자
        if (covertInt == NULL || checkSameNumber == 1)
        {
            ft_putstr_fd("Error", 2);
            write(1,'\n', 1);
            return (NULL);
        } else {
            tmp[listIndex++] = covertInt;
			avIndex++;
        }
    }
    tmp[listIndex] = '\0';
	list = tmp;
	free (tmp);
    return (list);
}