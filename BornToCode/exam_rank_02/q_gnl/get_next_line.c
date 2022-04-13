#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char *get_next_line(int fd)
{
	char	*ret = malloc(9999);
	char	c;
	int	i = 0;
	int	cpt = 0;

	if (fd < 0)
		return (NULL);
	while ((cpt = read(fd, &c, 1)) > 0)
	{
		ret[i] = c;
		i++;
		if (c == '\n')
			break ;
	}
	if (cpt <= 0)
	{
		free(ret);
		return (NULL);
	}
	ret[i] = '\0';
	return (ret);
}

int	main(int ac, char **av)
{
	int	fd = 0;
	char	*line;

	if (ac > 1)
		fd = open(av[1], O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("line | %s", line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}
