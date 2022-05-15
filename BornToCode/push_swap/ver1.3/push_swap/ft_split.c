/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:53:12 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/13 18:53:13 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_second_split(char **result, char **av)
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
			j = check_size(av, i, j);
			create_result(result, &index, &j, &position);
			if (check_index(result, index))
				break ;
			make_str(result[index], av[i], position, j - position);
			if (0 == av[i][j])
				break ;
			index++;
		}
		index++;
		i++;
	}
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
