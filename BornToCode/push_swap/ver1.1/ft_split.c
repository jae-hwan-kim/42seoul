#include "push_swap.h"

// int	ft_w_len(char const *s, char c)
// {
// 	int	i;
// 	int	len;

// 	i = 0;
// 	len = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			i++;
// 		else
// 		{
// 			len++;
// 			while (s[i] && s[i] != c)
// 				i++;
// 		}
// 	}
// 	return (len);
// }

// char	*ft_w_make(char *word, char const *s, int n, int w_len)
// {
// 	int		i;

// 	i = 0;
// 	while (w_len > 0)
// 	{
// 		word[i] = s[n - w_len];
// 		i++;
// 		w_len--;
// 	}
// 	word[i] = '\0';
// 	return (word);
// }

// char	**ft_split2(char **result, char const *s, char c, int w_len)
// {
// 	int		i;
// 	int		n;
// 	int		w_len2;

// 	i = 0;
// 	n = 0;
// 	w_len2 = 0;
// 	while (s[n] && i < w_len)
// 	{
// 		while (s[n] && s[n] == c)
// 			n++;
// 		while (s[n] && s[n] != c)
// 		{
// 			n++;
// 			w_len2++;
// 		}
// 		result[i] = (char *)malloc(sizeof(char) * (w_len2 + 1));
// 		if (result == 0)
// 			return (0);
// 		ft_w_make(result[i], s, n, w_len2);
// 		w_len2 = 0;
// 		i++;
// 	}
// 	result[i] = 0;
// 	return (result);
// }

int	check_spaces(char const **av)
{
	int	i;
	int	j;

	i = 0;
	while (0 != av[i])
	{
		j = 0;
		while (0 != av[i][j])
		{
			if ((9 <= av[i][j] && 13 >= av[i][j]) || av[i][j] == 32)
			{
				if (av[i][j + 1] == 0)
					return (1);
				j++;
			}
			else
				break;
		}
		i++;
	}
	return (0);
}

int	check_null(char const **av)
{
	int	i;
	int	length;

	i = 0;
	while (0 != av[i])
	{
		length = ft_strlen(av[i]);
		if (0 == length)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char const **av)
{
	int		w_len;
	char	**result;

	if (check_null(av) || check_spaces(av))
	{
		ft_printf("Error");
		exit (1);
	}
	// w_len = ft_w_len(av);
	// result = (char **)malloc(sizeof(char *) * (w_len + 1));
	// if (result == 0)
	// 	return (0);
	// ft_split2(result, av, w_len);
	return (result);
}