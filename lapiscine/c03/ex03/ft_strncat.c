/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 23:37:54 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/21 23:38:18 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		if (a < nb)
		{
			dest[i] = src[a];
			i++;
		}
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
