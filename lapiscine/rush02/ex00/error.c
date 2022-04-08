/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:32:46 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/26 10:32:49 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_error(int ac)
{
	if (ac > 3 || ac == 1)
	{
		write(2, "Error", 5);
		return (0);
	}
	return (1);
}

int	check_fd_error(int fd)
{
	if (fd < 0)
	{
		write(2, "Error", 5);
		return (0);
	}
	return (1);
}
