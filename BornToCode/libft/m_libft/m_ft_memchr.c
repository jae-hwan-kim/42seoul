/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:55:08 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/12 20:49:11 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

int main(void)
{
    char    *pch;
	char    *pch2;
    char    str[] = "Example string";

    pch = ft_memchr(str, 'a', strlen(str));
	pch2 = memchr(str, 'a', strlen(str));

    printf("str[2] 주소: %p\n", &str[2]);
    printf("ft_memchr 주소 = %p\n", pch);
	printf("memchr 주소 = %p\n", pch2);
    return (0);
}
