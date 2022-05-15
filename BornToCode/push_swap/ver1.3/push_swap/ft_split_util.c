/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:32:02 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/14 11:32:16 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_size(char **av)
{
	int	i;
	int	j;
	int	length;

	i = 1;
	length = 0;
	while (0 != av[i])
	{
		j = 0;
		while (0 != av[i][j])
		{
			if ((9 <= av[i][j] && 13 >= av[i][j]) || 32 == av[i][j])
				j++;
			else
			{
				while (0 != av[i][j]
				 && (9 > av[i][j] || 13 < av[i][j]) && 32 != av[i][j])
					j++;
				length++;
			}
		}
		i++;
	}
	return (length);
}

void	make_str(char *word, char *av, int position, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		word[i] = av[position];
		position++;
		i++;
	}
	word[i] = '\0';
}

int	check_size(char **av, int i, int j)
{
	while ((9 <= av[i][j] && 13 >= av[i][j]) || 32 == av[i][j])
	{
		j++;
		if (0 == av[i][j])
			return (0);
	}
	while (('0' <= av[i][j] && '9' >= av[i][j])
		|| '+' == av[i][j] || '-' == av[i][j])
		j++;
	return (j);
}

int	check_index(char **result, int index)
{
	if (0 == result[index])
	{
		index--;
		return (1);
	}
	return (0);
}

void	create_result(char **result, int *index, int *j, int *position)
{
	if (0 != *j)
		result[*index] = (char *)malloc(sizeof(char) * (*j - *position + 1));
	else
		return ;
	if (0 == result[*index])
	{
		while (0 <= *index)
		{
			free(result[*index]);
			result[*index] = 0;
			(*index)--;
		}
		free(result);
		result = 0;
		ft_printf("Error\n");
		exit(1);
	}
}
