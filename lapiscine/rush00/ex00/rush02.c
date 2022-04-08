/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 09:27:22 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/12 09:27:26 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(int now_c, int now_r, int last_c, int last_r);
void	ft_putchar(char *chr);

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
			print(now_c, now_r, last_c, last_r);
			now_c++;
		}
		ft_putchar("\n");
		now_r++;
	}
}

void	print(int now_c, int now_r, int last_c, int last_r)
{
	if (now_r == 1 && now_c == 1)
		ft_putchar("A");
	else if (now_r == 1 && now_c == last_c)
		ft_putchar("A");
	else if (now_r == last_r && now_c == 1)
		ft_putchar("C");
	else if (now_r == last_r && now_c == last_c)
		ft_putchar("C");
	else if (now_c != 1 && now_c != last_c && now_r != 1 && now_r != last_r)
		ft_putchar(" ");
	else
		ft_putchar("B");
}
