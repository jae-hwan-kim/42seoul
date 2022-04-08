/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:53:08 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 20:21:31 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    s1[] = "za";
    char    s2[] = "zaa";

    printf("%d\n", ft_strncmp(s1, s2, 3));
    printf("%d\n", strncmp(s1, s2, 3));
    return (0);
}
