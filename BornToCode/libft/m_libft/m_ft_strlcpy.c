/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:21:23 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 17:20:58 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char origin[] = "Blockjae";
    char dest[5] = {'0', '1', '2', '3', '4'};

    printf("origin : Blockjae\n");
    printf("dest : %s\n", dest);
    printf("함수 실행 전문자열 : %s\n", dest);
    printf("함수 : ft_strlcpy(dest, origin, 4)\n");
    printf("함수 실행 후 ft_strlcpy : %lu\n", ft_strlcpy(dest, origin, 4));
	printf("함수 실행 후  ft_strlen : %lu\n", ft_strlen(dest));
    printf("함수 실행 후 dest 문자열 : %s\n", dest);
    printf("dest[1] : %c\n", dest[0]);
    printf("dest[2] : %c\n", dest[1]);
    printf("dest[3] : %c\n", dest[2]);
    printf("dest[4] : %c\n", dest[3]);
    printf("dest[5] : %c\n", dest[4]);
	return (0);
}
