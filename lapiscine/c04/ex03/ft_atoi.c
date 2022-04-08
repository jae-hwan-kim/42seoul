/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:44:41 by jaekim            #+#    #+#             */
/*   Updated: 2021/10/19 16:51:30 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	num = 0;
	i = 0;
	sign = 1;
	while (*str)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			i++;
		}
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - 48);
			i++;
		}
		return (sign * num);
	}
	return (0);
}
