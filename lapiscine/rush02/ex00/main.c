/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:32:57 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/26 10:33:01 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "error.h"
#include "print.h"

int	main(int ac, char **av)
{
	int		fd;
	int		index;
	int		pos;
	char	num;
	char	buf[80];

	if (check_error(ac) == 0)
		return (0);
	num = av[1][0];
	fd = open("./numbers.dict", O_RDONLY);
	if (check_fd_error(fd) == 0)
		return (0);
	read(fd, buf, 80);
	pos = 0;
	index = 0;
	while (av[1][index] != '\0')
	{
		pos = pos * 10 + av[1][index] - '0';
		index++;
	}
	print(buf, num);
	close(fd);
	return (0);
}
