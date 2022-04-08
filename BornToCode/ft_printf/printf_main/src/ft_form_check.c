/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:27:55 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/01 09:45:17 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_form_check(int index, const char *argu, va_list ap)
{
	if (argu[index + 1] == '%')
		return (ft_putchar_fd(argu[index + 1], 1));
	if (argu[index + 1] == 'c')
		return (ft_put_c(va_arg(ap, int)));
	if (argu[index + 1] == 's')
		return (ft_put_s(va_arg(ap, char *)));
	if (argu[index + 1] == 'd' || argu[index + 1] == 'i')
		return (ft_put_d_i(va_arg(ap, int)));
	if (argu[index + 1] == 'u')
		return (ft_put_u(va_arg(ap, unsigned int)));
	if (argu[index + 1] == 'x' || argu[index + 1] == 'X')
		return (ft_put_x(va_arg(ap, int), argu[index + 1]));
	if (argu[index + 1] == 'p')
		return (ft_put_p(va_arg(ap, size_t)));
	return (0);
}
