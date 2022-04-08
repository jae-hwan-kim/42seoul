/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimjaehwan <kimjaehwan@student.42seou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:28:00 by kimjaehwa         #+#    #+#             */
/*   Updated: 2021/12/13 09:46:39 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char    str[] = "2147483648";
	char    str2[] = "-2147483649";

    printf("ft_atoi1 : %d\n", ft_atoi(str));
    printf("atoi1: %d\n", atoi(str));
    printf("ft_atoi2 : %d\n", ft_atoi(str2));
    printf("atoi2: %d\n", atoi(str2));
    return (0);
}
