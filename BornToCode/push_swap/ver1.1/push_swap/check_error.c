#include "push_swap.h"

int	check_spaces(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (0 != av[i])
	{
		j = 0;
		while (0 != av[i][j])
		{
			if ((9 <= av[i][j] && 13 >= av[i][j]) || av[i][j] == 32)
			{
				if (av[i][j + 1] == 0)
					return (1);
				j++;
			}
			else
				break;
		}
		i++;
	}
	return (0);
}

int	check_null(char **av)
{
	int	i;
	int	length;

	i = 1;
	while (0 != av[i])
	{
		length = ft_strlen(av[i]);
		if (0 == length)
			return (1);
		i++;
	}
	return (0);
}

int	check_digit(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (0 != av[i])
	{
		j = 0;
		while (0 != av[i][j])
		{
			if ((9 <= av[i][j] && 13 >= av[i][j]) || 32 == av[i][j]
			 || '+' == av[i][j] || '-' == av[i][j])
				j++;
			else if ('0' > av[i][j] || '9' < av[i][j])
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	check_sign(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (0 != av[i])
	{
		j = 0;
		while (0 != av[i][j])
		{
			if ('+' == av[i][j] || '-' == av[i][j])
			{
				j++;
				if (0 == av[i][j] || '+' == av[i][j] || '-' == av[i][j]
				 || (9 <= av[i][j] && 13 >= av[i][j]) || 32 == av[i][j])
					return (1);
			}
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	check_error(char **av)
{
	if (check_null(av) || check_spaces(av)
	 || check_digit(av) || check_sign(av))
		return (1);
	return (0);
}