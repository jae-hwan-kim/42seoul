/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:31:59 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/01 09:43:32 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_hex(unsigned int num, char *str)
{
	unsigned int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_hex(num / 16, str);
		len += ft_hex(num % 16, str);
	}
	else
		len += ft_putchar_fd(str[num], 1);
	return (len);
}
