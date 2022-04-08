/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:16:05 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 16:03:29 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    str1[] = "Hello";
    char    str2[] = "42seoul";
    char    *ptr;

    ptr = ft_strjoin(str1, str2);
    printf("%s\n", ptr);
    return (0);
}
