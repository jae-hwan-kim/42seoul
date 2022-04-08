/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:54:54 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/13 14:43:34 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	int	i;
    t_list *head = malloc(sizeof(t_list));
    t_list *s_list1 = malloc(sizeof(t_list));
    t_list *s_list2 = malloc(sizeof(t_list));
    t_list *s_list3 = malloc(sizeof(t_list));

	head->content = (int *)malloc(sizeof(int *));
	*(int *)head->content = 5;

    head->next = s_list1;
    s_list1->content = (int *)malloc(sizeof(int *));
    *(int *)s_list1->content = 10;

    s_list1->next = s_list3;
    s_list3->content = (int *)malloc(sizeof(int *));
    *(int *)s_list3->content = 20;
	
	s_list3->next = 0;

	printf("ft_lstadd_front 이전 값\n");
	t_list *curr = head;
	i = 1;
    while (curr != 0)
    {
        printf("%d 번째 값 : %d\n", i, *(int *)curr->content);
        printf("%d 번째 주소 : %p\n", i, curr);
        curr = curr->next;
		i++;
    }

	printf("ft_lstadd_front 이후 값\n");
    s_list2->content = (int *)malloc(sizeof(int *));
    *(int *)s_list2->content = 15;
	ft_lstadd_front(&head, s_list2);
    t_list *curr2 = s_list2;
	i = 1;
    while (curr2 != 0)
    {
        printf("%d 번째 값 : %d\n", i, *(int *)curr2->content);
        printf("%d 번째 주소 : %p\n", i, curr2);
        curr2 = curr2->next;
		i++;
    }
    return (0);
}
