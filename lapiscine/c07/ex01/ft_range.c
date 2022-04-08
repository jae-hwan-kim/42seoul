/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 23:03:53 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/28 23:03:55 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	i;

	if (max <= min)
		return (NULL);
	temp = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
