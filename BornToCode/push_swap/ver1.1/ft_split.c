#include "push_swap.h"

int	ft_word_length(char **av)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	length = 0;
	while (0 != av[i])
	{
		j = 0;
		while (0 != av[i][j])
		{
			if ((9 <= av[i][j] && 13 >= av[i][j]) || 32 == av[i][j])
				j++;
			else if (('0' <= av[i][j] && '9' >= av[i][j])
			 || '+' == av[i][j] || '-' == av[i][j])
			{
				j++;
				length++;
			}
		}
		i++;
	}
	ft_printf("길이 %d\n", length);
	return (length);
}

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

// char	**ft_split2(char **result, char const *s, int w_len)
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

char	**ft_split(char **av)
{
	int		word_len;
	char	**result;

	result = 0;
	word_len = ft_word_length(av);
	// result = (char **)malloc(sizeof(char *) * (word_len + 1));
	// if (result == 0)
	// 	return (0);
	// ft_split2(result, av, word_len);
	return (result);
}