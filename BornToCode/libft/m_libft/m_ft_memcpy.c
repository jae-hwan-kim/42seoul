/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:58:21 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/13 18:25:11 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "axxxxxxaa";
    char src2[] = "axxxxxxaa";
    char dest1[] = "12345678";
    char dest2[] = "12345678";

    memcpy(dest2 + 3, dest2, 7);
   // ft_memcpy(dest2 + 3, dest2, 7);
    printf("memcpy, dest1 : %s\n", dest1);
   // printf("ft_memcpy, dest2 : %s\n", dest2);
    return 0;
}
