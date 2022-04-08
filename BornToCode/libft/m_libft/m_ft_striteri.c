/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimjaehwan <kimjaehwan@student.42seou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:57:29 by kimjaehwa         #+#    #+#             */
/*   Updated: 2021/12/13 12:26:22 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	f(unsigned int n, char *c)
{
    *c = *c + 1;
}

void	ft_striteri(char *s, void (f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		printf("%c\n", s[i]);
		i++;
	}
}

int main(void)
{
    char    str[] = "i`djhl";

    ft_striteri(str, f);
	printf("%s\n", str);
    return (0);
}
