/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:07:32 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/12 18:55:17 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "aaa";
    char src2[] = "aaa";
    char dest1[] = "12345678";
    char dest2[] = "12345678";

    memmove(dest1 + 3, dest1, 6);
    ft_memmove(dest2 + 3, dest2, 6);
    printf("memmove, dest1 : %s\n", dest1);
    printf("ft_memmove, dest2 : %s\n", dest2);
    return 0;
}
