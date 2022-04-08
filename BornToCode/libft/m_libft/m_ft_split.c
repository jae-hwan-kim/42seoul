/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimjaehwan <kimjaehwan@student.42seou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:55:55 by kimjaehwa         #+#    #+#             */
/*   Updated: 2021/12/11 16:43:00 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = "123c45c678";
	char	c = 'c';
	char	**result;
	int		i = 0;
	int		i2 = 0;

	result = ft_split(str, c);
	/*
	printf("result[0][0] : %c\n", result[0][0]);
	printf("result[0][1] : %c\n", result[0][1]);
	printf("result[0][2] : %c\n", result[0][2]);
	printf("result[1][0] : %c\n", result[1][0]);
	printf("result[1][1] : %c\n", result[1][1]);
	printf("result[2][0] : %c\n", result[2][0]);
	printf("result[2][1] : %c\n", result[2][1]);
	printf("result[2][2] : %c\n", result[2][2]);
	*/
	while (result[i])
	{
		i2 = 0;
		while (result[i][i2])
		{
			write(1, &result[i][i2], 1);
			i2++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
