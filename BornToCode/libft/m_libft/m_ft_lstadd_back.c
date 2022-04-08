/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:31:38 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/13 14:32:49 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	int	i;
    t_list *head = malloc(sizeof(t_list));
    t_list *s_list1 = malloc(sizeof(t_list));
    t_list *s_list3 = malloc(sizeof(t_list));
    t_list *s_list2 = malloc(sizeof(t_list));

    head->next = s_list1;
    s_list1->content = (int *)malloc(sizeof(int *));
    *(int *)s_list1->content = 10;

    s_list1->next = s_list3;
    s_list3->content = (int *)malloc(sizeof(int *));
    *(int *)s_list3->content = 20;

	s_list3->next = 0;
	printf("ft_lstadd_back 이전 값\n");
	t_list *curr = head -> next;
	i = 2;
    while (curr != 0)
    {
        printf("%d 번째 값 : %d\n", i, *(int *)curr->content);
        printf("%d 번째 주소 : %p\n", i, curr);
        curr = curr->next;
		i++;
    }

	printf("ft_lstadd_back 이후 값\n");
    s_list2->content = (int *)malloc(sizeof(int *));
    *(int *)s_list2->content = 15;
	ft_lstadd_back(&head, s_list2);
    t_list *curr2 = head -> next;
	i = 2;
    while (curr2 != 0)
    {
        printf("%d 번째 값 : %d\n", i, *(int *)curr2->content);
        printf("%d 번째 주소 : %p\n", i, curr2);
        curr2 = curr2->next;
		i++;
    }
    return (0);
}
