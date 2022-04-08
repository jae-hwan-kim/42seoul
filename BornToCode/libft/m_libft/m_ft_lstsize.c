/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:38:40 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/13 13:49:35 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *head = malloc(sizeof(t_list));
    t_list *s_list1 = malloc(sizeof(t_list));
    t_list *s_list2 = malloc(sizeof(t_list));
    t_list *s_list3 = malloc(sizeof(t_list));

    head->next = s_list1;
    s_list1->content = (int *)malloc(sizeof(int *));
	*(int *)s_list1->content = 10;

    s_list1->next = s_list2;
    s_list2->content = (int *)malloc(sizeof(int *));
    *(int *)s_list2->content = 15;

    s_list2->next = s_list3;
    s_list3->content = (int *)malloc(sizeof(int *));
    *(int *)s_list3->content = 20;
    s_list3->next = 0;

    t_list *curr = head -> next;
    while (curr != 0)
    {
        printf("%d\n", *(int *)curr->content);
        curr = curr->next;
    }
    printf("lstsize : %d\n", ft_lstsize(head));
    return (0);
}
