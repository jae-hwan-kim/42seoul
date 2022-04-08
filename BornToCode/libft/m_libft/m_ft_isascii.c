/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:50:17 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 14:41:13 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
//  int c = 32;
    int c = -1;

    printf("%d\n", ft_isascii(c));
    printf("%d\n", isascii(c));
    return (0);
}
