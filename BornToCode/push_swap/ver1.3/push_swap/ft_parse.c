/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimjaehwan <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:16:21 by kimjaehwa         #+#    #+#             */
/*   Updated: 2022/05/13 16:33:17 by kimjaehwa        ###   ########.fr       */
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
				ft_printf("Error\n");
				exit (1);
			}
			j++;
		}
		i++;
		index++;
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
		ft_printf("Error\n");
		exit (1);
	}
	else
		temp = ft_split(av);
	i = 0;
	while (temp[i])
		i++;
	length = i;
	result = (int *)malloc(sizeof(int) * (i + 2));
	if (0 == result)
		exit(1);
	result[0] = i;
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
	parameter_compare(result);
	return (result);
}
