/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:37:38 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/19 17:15:15 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 4

int	error_print_and_return1(void)
{
	write(2, "Error\n", 6);
	return (1);
}

int	inputable(char ch)
{
	if ('1' <= ch && ch <= '0' + N)
		return (0);
	else if (ch == ' ')
		return (0);
	return (1);
}

int	error(int argc, char **argv)
{
	int	flag;
	int	i;

	flag = 0;
	if (argc != 2)
	{
		flag = error_print_and_return1();
		return (flag);
	}
	i = 0;
	while (argv[1][i])
	{
		if (inputable(argv[1][i]))
		{
			flag = error_print_and_return1();
			return (flag);
		}
		i++;
	}
	return (flag);
}
