/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:14:04 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 15:19:06 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[50] = {'H', 'e', 'l', 'l', 'o', '\0', ' ', 'a'};
	char s2[50] = {'H', 'e', 'l', 'l', 'o', '\0', ' ', 'z'};

	printf("ft_memcmp 진행 : %d\n", ft_memcmp(s1, s2, 8));
	printf("memcmp 진행 : %d\n", memcmp(s1, s2, 8));
	return 0;
}
