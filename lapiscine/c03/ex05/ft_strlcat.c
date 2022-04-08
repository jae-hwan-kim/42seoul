/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 00:17:19 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/25 09:35:51 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	i;
	unsigned int	s;

	d = 0;
	i = 0;
	s = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		s += size;
	else
		s += d;
	while (src[i] && d + 1 < size)
		dest[d++] = src[i++];
	dest[d] = '\0';
	return (s);
}
