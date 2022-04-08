/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:43:44 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/12 20:22:05 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str[] = "JabkiMnice";
    char a = 'd';
    char b = '\0';
    char c = 'e';

    printf("str : %p\n", ft_strrchr(str, b));
    printf("ft_strrchr에서 찾은 문자 공백 : %p\n", ft_strrchr(str, a));
	printf("strrchr에서 찾은 문자 공백 : %p\n", strrchr(str, a));
    printf("ft_strrchr에서 찾은 문자 널 : %p\n", ft_strrchr(str, b));
	printf("strrchr에서 찾은 문자 널 : %p\n", strrchr(str, b));
    printf("ft_strrchr에서 찾은 문자 e : %p\n", ft_strrchr(str, c));
	printf("strrchr에서 찾은 문자 e : %p\n", strrchr(str, c));
	return 0;
}
