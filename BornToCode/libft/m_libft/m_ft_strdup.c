/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:11:11 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/23 12:46:19 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    s[] = "";
    char    *ptr;

    ptr = ft_strdup(s);
	printf("원본 주소 및 문자열: %p, %d\n", s, s[0]);
    printf("복사 주소 및 문자열: %p, %d\n", ptr, ptr[0]);
    return (0);
}
