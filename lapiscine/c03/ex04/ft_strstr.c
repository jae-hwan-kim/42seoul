/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 23:38:28 by jaekim            #+#    #+#             */
/*   Updated: 2021/09/22 21:24:20 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	if (to_find[i] != '\0')
	{
		n = 0;
		while (str[n] != '\0')
		{
			i = 0;
			while (str[n + i] == to_find[i])
			{
				if (to_find[i + 1] == '\0')
					return (&str[n]);
				i++;
			}
			n++;
		}
	}
	return (0);
}
