/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 09:26:41 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/12 09:26:45 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *chr);

void	make_first_last(int now_c, int last_c)
{
	if (now_c == 1 || now_c == last_c)
		ft_putchar("o");
	else
		ft_putchar("-");
}

void	make_mid(int now_c, int last_c)
{
	if (now_c > 1 && now_c < last_c)
		ft_putchar(" ");
	else
		ft_putchar("|");
}

void	rush(int last_c, int last_r)
{
	int	now_c;
	int	now_r;

	now_r = 1;
	if (last_c < 1 || last_r < 1)
		return ;
	while (now_r <= last_r)
	{
		now_c = 1;
		while (now_c <= last_c)
		{
			if (now_r == 1 || now_r == last_r)
				make_first_last(now_c, last_c);
			else
				make_mid(now_c, last_c);
			now_c++;
		}
		ft_putchar("\n");
		now_r++;
	}
}
