/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 23:22:10 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/21 23:27:46 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	input;

	hex = "0123456789abcdef";
	while (*str != '\0')
	{
		input = (unsigned char)*str;
		if (input < 32 || input > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[input / 16]);
			ft_putchar(hex[input % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
