/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:43:44 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/12 20:11:38 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str[] = "JabkiMnice";
    char c = 'e';
    char d = '\0';

    printf("ft_strchr에서 찾은 문자 e : %p\n", ft_strchr(str, c));
	printf("strchr에서 찾은 문자 e : %p\n", strchr(str, c));
    printf("ft_strchr에서 찾은 문자 널 : %p\n", ft_strchr(str, d));
	printf("strchr에서 찾은 문자 널 : %p\n", strchr(str, d));
	return 0;
}
