/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:32:30 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/01 09:32:35 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_put_s(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
	if (str == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	return (len);
}
