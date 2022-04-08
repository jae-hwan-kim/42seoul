/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:44:47 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/18 11:44:59 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int *tab, int *tab2, int size)
{
	int	i;

	i = 0;
	while (i <= size - 1)
	{
		tab[i] = tab2[i];
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	temp;
	int	*tab2;

	tab2 = tab;
	i = 0;
	while (i <= size - 1)
	{
		a = i + 1;
		while (a <= size - 1)
		{
			if (tab2[i] > tab2[a])
			{
				temp = tab2[i];
				tab2[i] = tab2[a];
				tab2[a] = temp;
				a++;
			}
			else
				a++;
		}
		i++;
	}
	ft_putnum(tab, tab2, size);
}
