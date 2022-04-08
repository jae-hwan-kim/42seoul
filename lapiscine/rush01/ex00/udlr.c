/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   udlr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:21:31 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/19 18:21:35 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define N 4

void	udlr_input(int **udlr, char *argv_1)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < 4)
	{
		j = 0;
		while (j < N)
		{
			while (argv_1[cnt] == ' ')
				cnt++;
			udlr[i][j++] = (int)(argv_1[cnt++] - '0');
		}
		i++;
	}
}

int	**udlr_malloc(char *argv_1)
{
	int	**udlr;
	int	i;
	int	j;

	udlr = (int **)malloc (sizeof (int *) * 4);
	if (udlr == NULL)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		udlr[i] = (int *)malloc (sizeof (int) * N);
		if (udlr[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free (udlr[j]);
				j++;
			}
			return (NULL);
		}
		i++;
	}
	udlr_input(udlr, argv_1);
	return (udlr);
}
