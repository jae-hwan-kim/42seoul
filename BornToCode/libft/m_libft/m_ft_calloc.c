/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:54:28 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 15:25:36 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    *ptr;
    char    s1[] = "123";

    ptr = s1;

    printf("함수 적용 전\n");
    printf("%c\n", ptr[0]);
    printf("%c\n", ptr[1]);
    printf("%c\n", ptr[2]);

    ptr = (char *)ft_calloc(3,sizeof(char));

    printf("함수 적용 후\n");
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    return (0);
}
