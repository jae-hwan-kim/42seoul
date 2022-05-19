/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del_util.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:57:07 by jaekim            #+#    #+#             */
/*   Updated: 2022/05/14 16:29:40 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_node **lst)
{
	t_node	*curr;

	if (lst == 0)
		return ;
	while (*lst)
	{
		curr = (*lst)->next;
		free(lst);
		*lst = curr;
	}
	*lst = 0;
}
