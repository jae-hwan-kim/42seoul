/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:29:12 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 16:24:28 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    f(unsigned int n, char c)
{
    char    str;

    str = c + 1;
    return (str);
}

int main(void)
{
    char    str[] = "i`djhl";
    char    *str2;
    str2 = ft_strmapi(str, *f);
    printf("%s\n", str2);
    return (0);
}
