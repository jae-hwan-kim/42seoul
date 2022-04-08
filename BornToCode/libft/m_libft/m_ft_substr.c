/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:24:31 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/13 10:18:59 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    str[] = "abcdef";
    char    *ptr;

    ptr = ft_substr(str, 3, 5);
    printf("%s\n", ptr);
    return (0);
}
