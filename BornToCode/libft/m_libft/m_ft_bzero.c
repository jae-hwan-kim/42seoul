/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:54:08 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 14:24:25 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char arr[] = "123456";
    int i = 0;

    printf("ft_bzero 전\n");
    while (arr[i] != '\0')
    {
        printf("arr[%d] = %c\n", i, arr[i]);
        i++;
    }
    ft_bzero(arr, 4);

    printf("ft_bzero 후\n");
    printf("arr[0] = %c\n", arr[0]);
    printf("arr[1] = %c\n", arr[1]);
    printf("arr[2] = %c\n", arr[2]);
    printf("arr[3] = %c\n", arr[3]);
    printf("arr[4] = %c\n", arr[4]);
    printf("arr[5] = %c\n", arr[5]);
    return (0);
}
