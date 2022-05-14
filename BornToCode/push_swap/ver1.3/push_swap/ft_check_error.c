/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:47:06 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 19:58:58 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				break ;
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

void	check_error(int ac, char **av)
{
	if (ac <= 1)
		exit (0);
	if (check_null(av) || check_spaces(av)
		|| check_digit(av) || check_sign(av))
	{
		ft_printf("Error\n");
		exit (1);
	}
	return ;
}
