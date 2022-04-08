/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:48:41 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/13 08:53:53 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    str[] = "abcdef";
    char    src1[] = "";
    char    src2[] = "\0";
    char    src3[] = "bc";
    char    src4[] = "cb";
    char    *ptr1 = ft_strnstr(str, src1, 6);
    char    *ptr2 = ft_strnstr(str, src2, 6);
    char    *ptr3 = ft_strnstr(str, src3, 6);
    char    *ptr4 = ft_strnstr(str, src4, 6);
    char    *ptr5 = strnstr(str, src1, 6);
    char    *ptr6 = strnstr(str, src2, 6);
    char    *ptr7 = strnstr(str, src3, 6);
    char    *ptr8 = strnstr(str, src4, 6);

    printf("str : %s\n", str);
    printf("\nft_strnstr --------\n");
    printf("src1 빈문자열 ' ' : %s\n", ptr1);
    printf("src2 src가 널 : %s\n", ptr2);
    printf("src3 src가 bc : %s\n", ptr3);
    printf("src4 src가 cb : %s\n", ptr4);
   	printf("\nstrnstr --------\n");
    printf("src1 빈문자열 ' ' : %s\n", ptr5);
    printf("src2 src가 널 : %s\n", ptr6);
    printf("src3 src가 bc : %s\n", ptr7);
    printf("src4 src가 cb : %s\n", ptr8);
	return (0);
}
