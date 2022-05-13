/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimjaehwan <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:38:55 by kimjaehwa         #+#    #+#             */
/*   Updated: 2022/05/13 15:39:03 by kimjaehwa        ###   ########.fr       */
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

char	**ft_second_split(char **result, char **av)
{
	int		i;
	int		j;
	int		index;
	int		position;

	i = 1;
	index = 0;
	while (0 != av[i])
	{
		j = 0;
		while (0 != av[i][j])
		{
			position = j;
			if (0 != check_size(av, i, j))
			{
				j = check_size(av, i, j);
				result[index] = (char *)malloc(sizeof(char) * (j - position + 1));
			}
			if (0 == result[index])
			{
				index--;
				break ;
			}
			make_str(result[index], av[i], position, j - position);
			if (0 == av[i][j])
				break ;
			index++;
		}
		index++;
		i++;
	}
	return (result);
}

char	**ft_split(char **av)
{
	int		split_size;
	int		i;
	char	**result;

	result = 0;
	i = 0;
	split_size = count_size(av);
	result = (char **)malloc(sizeof(char *) * split_size + 1);
	if (result == 0)
		return (0);
	result[split_size + 1] = 0;
	ft_second_split(result, av);
	return (result);
}
