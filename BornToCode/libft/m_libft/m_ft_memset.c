/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:10:53 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/12 15:32:27 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[6] = "abcdef";
	char	s2[6] = "abcdef";
	int		n = 126;

	ft_memset(s2, n, 6);
	memset(s1, n, 6);
	printf("ft_memset 값 : %s\n", s2);
	printf("memset 값 : %s\n", s1);
	return (0);
}
