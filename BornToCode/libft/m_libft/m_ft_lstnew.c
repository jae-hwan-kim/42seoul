/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:36:38 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 20:51:17 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    int     content = 10;

    t_list  *curr = ft_lstnew(&content);
    while (curr != 0)
    {
        printf("%d\n", *(int *)curr -> content);
        curr = curr -> next;
    }
    return (0);
}
