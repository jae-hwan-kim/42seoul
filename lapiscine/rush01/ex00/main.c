/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:40:43 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/19 18:05:21 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "error.h"
#include "udlr.h"
#define N 4

int	main(int argc, char **argv)
{
	int	**udlr;
	int	flag;

	flag = 0;
	if (error(argc, argv))
		return (0);
	udlr = udlr_malloc(argv[1]);
	return (0);
}
