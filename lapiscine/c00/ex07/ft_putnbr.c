/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:30:21 by jaekim            #+#    #+#             */
/*   Updated: 2021/10/19 17:16:04 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnum(char c)
{
	write(1, &c, 1);
}

void	ft_recursive(int nb)
{
	int	a;
	int	b;

	a = nb / 10;
	b = nb % 10;
	if (a > 9)
		ft_putnbr(a);
	else if (a == 0)
		;
	else
		ft_putnum(a + '0');
	ft_putnum(b + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{	
		write(1, "-", 1);
		nb = -nb;
	}
	ft_recursive(nb);
}
