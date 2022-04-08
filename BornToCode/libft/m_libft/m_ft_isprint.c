/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:50:17 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 14:43:14 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
//  int c = 32;
    char    c = 35;

    printf("%d\n", ft_isprint(c));
    printf("%d\n", isprint(c));
    return (0);
}
