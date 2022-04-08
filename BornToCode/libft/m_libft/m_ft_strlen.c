/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:11:28 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 17:08:25 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char a[20] = {'a', 'b', 'c', 'd', 'e'};

    printf("%zu\n", ft_strlen(a));
    printf("%lu\n", strlen(a));
    return (0);
}
