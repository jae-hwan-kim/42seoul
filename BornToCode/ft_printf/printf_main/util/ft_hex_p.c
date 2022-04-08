/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:31:45 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/01 09:44:32 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_hex_p(size_t num, char *hex)
{
	unsigned int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_hex_p(num / 16, hex);
		len += ft_hex_p(num % 16, hex);
	}
	else
		len += ft_putchar_fd(hex[num], 1);
	return (len);
}
