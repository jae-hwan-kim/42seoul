/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:28:11 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/18 11:28:13 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	 int	i;
	char	alphabet;

	i = 0;
	alphabet = 'z';
	while (i < 26)
	{
		ft_putchar(alphabet);
		i++;
		alphabet--;
	}
}
