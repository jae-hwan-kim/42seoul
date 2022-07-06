/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:26:01 by jereligi          #+#    #+#             */
/*   Updated: 2020/09/26 22:42:30 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/philo.h"

void		print_error_not_enought_arg(void)
{
	write(1, COLOR_RED, 5);
	write(1, "Error : ", 8);
	write(1, COLOR_RESET, 5);
	write(1, " the program need 5 or 6 arguments.\n", 36);
	print_usage();
}

void		print_error_more_arg(void)
{
	write(1, COLOR_RED, 5);
	write(1, "Error : ", 8);
	write(1, COLOR_RESET, 5);
	write(1, " You put more arguments", 23);
	write(1, ", min arguments 5, max arguments 6\n", 35);
	print_usage();
}

void		print_usage(void)
{
	write(1, COLOR_BLUE, 5);
	write(1, "Usage : \n", 9);
	write(1, COLOR_RESET, 5);
	write(1, COLOR_GREEN, 5);
	write(1, "\t./philo ", 9);
	write(1, COLOR_RESET, 5);
	write(1, "number_of_philosopher time_to_die time_to_eat time_to_sleep ",
	60);
	write(1, "[number_of_time_each_philosophers_must_eat]\n\n", 45);
}
