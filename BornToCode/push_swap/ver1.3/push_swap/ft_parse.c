/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:51:15 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 19:57:56 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parameter_compare(int *result)
{
	int	i;
	int	j;
	int	index;

	i = 1;
	index = 0;
	while (index < result[0])
	{
		j = i + 1;
		while (0 != result[j])
		{
			if (result[i] == result[j])
			{
				ft_putstr_fd("Error\n", 2);
				exit (1);
			}
			j++;
		}
		i++;
		index++;
	}
}

void	make_int_array(int *result, char **temp, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		result[i + 1] = ft_atoi(temp[i]);
		free(temp[i]);
		temp[i] = 0;
		i++;
	}
	result[i + 1] = 0;
	free(temp);
	temp = 0;
}

int	*check_error_and_split(int ac, char **av)
{
	int		i;
	int		length;
	int		*result;
	char	**temp;

	check_error(ac, av);
	temp = ft_split(av);
	i = 0;
	while (temp[i])
		i++;
	length = i;
	result = (int *)malloc(sizeof(int) * (i + 2));
	if (0 == result)
		exit(1);
	result[0] = i;
	make_int_array(result, temp, length);
	parameter_compare(result);
	return (result);
}
