/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:38:40 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/13 15:31:52 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*del(int *content)
{
	free(content);
	return (content);
}

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == 0 || del == 0)
        return ;
    del(lst->content);
    free(lst);
}

int main(void)
{
    t_list *head = malloc(sizeof(t_list));
    t_list *s_list1 = malloc(sizeof(t_list));
	t_list *s_list2 = malloc(sizeof(t_list));

    head->next = s_list1;
    s_list1->content = (int *)malloc(sizeof(int *));
	*(int *)s_list1->content = 10;
	s_list1->next = s_list2;

    s_list2->content = (int *)malloc(sizeof(int *));
	*(int *)s_list2->content = 20;
	s_list2->next = 0;

    printf("s_list1 ft_lstdelone 전\n");
    printf("head 주소: %p\n", head);
    printf("s_list1 번째 주소: %p\n", s_list1);
    printf("s_list2 번째 주소: %p\n", s_list2);

	ft_lstdelone(s_list1, del(s_list1->content));
	head->next = s_list2;
    printf("s_list1 ft_lstdelone 후\n");
    printf("head 주소: %p\n", head);
    //printf("s_list1 번째 주소: %p\n", s_list1);
    printf("s_list2 번째 주소: %p\n", s_list2);
    return (0);
}
