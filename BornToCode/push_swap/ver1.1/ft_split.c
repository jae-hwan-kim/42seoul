#include "push_swap.h"
#include <stdio.h>

int	count_size(char **av)
{
	int	i;
	int	j;
	int	length;

	i = 1;
	length = 0;
	while (0 != av[i])
	{
		j = 0;
		while (0 != av[i][j])
		{
			if ((9 <= av[i][j] && 13 >= av[i][j]) || 32 == av[i][j])
				j++;
			else
			{
				while (0 != av[i][j]
				 && (9 > av[i][j] || 13 < av[i][j]) && 32 != av[i][j])
					j++;
				length++;
			}
		}
		i++;
	}
	return (length);
}

void	make_str(char *word, char *av, int position, int length) // 0, 1
{
	int		i;

	i = 0;
	while (i < length)
	{
		word[i] = av[position];
		position++;
		i++;
	}
	word[i] = '\0';
}

char	**ft_second_split(char **result, char **av)
{
	int		i;
	int		j;
	int		size;
	int		index;
	int		position;

	i = 1;
	index = 0;
	while (0 != av[i])
	{
		j = 0;
		// printf("--> av = %c\n", av[i][1]);
		// printf("--> result = %s\n", result[index]);
		while (0 != av[i][j])
		{
			position = j; //0
			while ((9 <= av[i][j] && 13 >= av[i][j]) || 32 == av[i][j])
			{
				if (0 != av[i][j])
					break;
				else
					j++;
			}
			while (('0' <= av[i][j] && '9' >= av[i][j]) 
			 || '+' == av[i][j] || '-' == av[i][j])
			{
				if (0 != av[i][j])
					break;
				else
					j++;
			}
			size = j - position + 1;
			result[index] = (char *)malloc(sizeof(char) * size);
			make_str(result[index], av[i], position, size);
			index++;
		}
		i++;
	}
	// printf("dd\n");
	return (result);
}

char	**ft_split(char **av)
{
	int		split_size;
	int		i;
	char	**result;

	result = 0;
	i = 0;
	split_size = count_size(av);
	result = (char **)malloc(sizeof(char *) * split_size + 1);
	if (result == 0)
		return (0);
	result[split_size + 1] = 0;
	ft_second_split(result, av);
	i = 0;
	int	j = 0;
	// printf("result = %s\n", result[i]);
	while (result[i] != 0)
	{
		j = 0;
		while (result[i][j] != 0)
		{
			printf("result[%d][%d] = %c\n", i, j, result[i][j]);
			j++;
		}
		i++;
	}
	return (result);
}