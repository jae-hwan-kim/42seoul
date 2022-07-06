/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:15:41 by jereligi          #+#    #+#             */
/*   Updated: 2020/09/26 21:32:40 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/philo.h"

int		parsing_nb_philo(int nb)
{
	if (nb <= 1)
	{
		write(1, COLOR_RED, 5);
		write(1, "Error : ", 8);
		write(1, COLOR_RESET, 5);
		write(1, "number of philosophers must be greater than 1.\n", 47);
		return (1);
	}
	if (nb > 200)
	{
		write(1, COLOR_YELLOW, 5);
		write(1, "Warning : ", 10);
		write(1, COLOR_RESET, 5);
		write(1, "very large number of philosophers, ", 35);
		write(1, "risk of slowing down or crashing.\n", 35);
	}
	return (0);
}

int		parsing_time_to(int time_to, char *s)
{
	if (time_to <= 0)
	{
		write(1, COLOR_RED, 5);
		write(1, "Error : ", 8);
		write(1, COLOR_RESET, 5);
		write(1, s, ft_strlen(s));
		write(1, " can't be less than 1.\n", 23);
		return (1);
	}
	else if (time_to > 0 && time_to < 60)
	{
		write(1, COLOR_YELLOW, 5);
		write(1, "Warning : ", 10);
		write(1, COLOR_RESET, 5);
		write(1, s, ft_strlen(s));
		write(1, " less 60ms delay could be not enough for good result.\n", 54);
	}
	return (0);
}

int		parsing_number_of_meals(int nb_meals)
{
	if (nb_meals <= 0)
	{
		write(1, COLOR_RED, 5);
		write(1, "Error : ", 8);
		write(1, COLOR_RESET, 5);
		write(1, "number_of_time_each_philosophers_must_eat ", 42);
		write(1, "can't be less than 1\n", 21);
		return (1);
	}
	return (0);
}

int		parsing_manager(t_data *data)
{
	if (parsing_nb_philo(data->n_philo))
		return (1);
	if (parsing_time_to(data->t_die, "time_to_die"))
		return (1);
	if (parsing_time_to(data->t_eat, "time_to_eat"))
		return (1);
	if (parsing_time_to(data->t_sleep, "time_to_sleep"))
		return (1);
	if (data->meals == 1)
		if (parsing_number_of_meals(data->nb_meals))
			return (1);
	return (0);
}
