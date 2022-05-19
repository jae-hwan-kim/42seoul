/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:46:53 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:46:55 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_sorting(t_deque *deque_a)
{
	t_node	*node;
	int		check_index;

	node = deque_a -> head;
	check_index = deque_a -> head -> index;
	while (0 != node)
	{
		if (check_index != node -> index)
			return (0);
		node = node -> next;
		check_index++;
	}
	return (1);
}

void	int_range(long long number)
{
	if (-2147483648 > number || 2147483647 < number)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
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
		result = result * 10 + (str[i] - '0');
		i++;
	}
	int_range(result * sign);
	return (result * sign);
}
