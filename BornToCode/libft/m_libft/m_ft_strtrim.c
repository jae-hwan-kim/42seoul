/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:27:11 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/20 15:11:19 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    s1[] = "aadc123caa";
    char    set[] = "ac";

    printf("s1 = %s\n", s1);
    printf("set = %s\n", set);
    printf("ft_strtrim = %s\n", ft_strtrim(s1, set));
    return (0);
}
