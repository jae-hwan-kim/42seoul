/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:32:38 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 22:01:02 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*del(int *content)
{
	free(content);
}

int main(void)
{
    t_list *head = malloc(sizeof(t_list));
    t_list *s_list1 = malloc(sizeof(t_list));
    t_list *s_list2 = malloc(sizeof(t_list));

    head->next = s_list1;
    s_list1->content = 10;
    s_list1->next = s_list2;
    s_list3->content = 15;
    s_list2->next = 0;
	t_list *curr1 = head -> next;
    while (curr1 != 0)
    {
        printf("함수 전 curr1 : %d\n", curr1->content);
        curr1 = curr1->next;
    }
	ft_lstclear(head, *del(content))
	t_list *curr1 = head -> next;
    while (curr1 != 0)
    {
        printf("함수 후 curr1 : %d\n", curr1->content);
        curr1 = curr1->next;
    }
    return (0);
}
