/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seuol.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:28:26 by jaekim            #+#    #+#             */
/*   Updated: 2021/12/10 17:41:07 by kimjaehwa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "jaehw";
	char	dest[10] = "123";
	char	src2[] = "jaehw";
	char	dest2[10] = "123";

	printf("src : %s\n", src);
	printf("dest :  %s\n", dest);
	printf("ft_strlcat(dest, src, 5) 결과 : %lu\n", ft_strlcat(dest, src, 5));
	printf("ft_strlcat 후 dest2: %s\n", dest);
	printf("-----------------\n");
	printf("src2 : %s\n", src2);
	printf("dest2 :  %s\n", dest2);
	printf("strlcat(dest2, src2, 5) 결과 : %lu\n", strlcat(dest2, src2, 5));
	printf("strlcat 후 dest2: %s\n", dest2);
	return (0);
}
