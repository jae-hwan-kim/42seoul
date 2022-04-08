/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:47:15 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/27 09:59:12 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_ac(char **av, int ac)
{
	 int	i;
	 int	n;
	char	*temp;

	i = 1;
	while (i < ac)
	{
		n = i + 1;
		while (n < ac)
		{
			if (ft_strcmp(av[i], av[n]) > 0)
			{
				temp = av[i];
				av[i] = av[n];
				av[n] = temp;
			}
			n++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	ft_sort_ac(av, ac);
	i = 1;
	while (i < ac)
	{
		ft_putchar(av[i]);
		i++;
	}
	return (0);
}
