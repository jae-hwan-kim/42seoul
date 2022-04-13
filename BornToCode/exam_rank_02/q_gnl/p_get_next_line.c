#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

char *get_next_line(int fd)
{
	char	*line = malloc(9999);
	char	c;
	int	index = 0;
	int check_read = 0;

	if (fd < 0)
		return 0;
	while ((check_read = read(fd, &c, 1)) > 0)
	{
		line[index] = c;
		index++;
		if (c == '\n')
			break;
	}
	if (check_read <= 0)
	{
		free(line);
		return (0);
	}
	line[index] = '\0';
	return (line);
}

int	main(int ac, char **av)
{
	int fd = 0;
	char *line;

	if (ac == 2)
		fd = open(av[1], O_RDONLY);
	line = get_next_line(fd);
	while (line != 0)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}
