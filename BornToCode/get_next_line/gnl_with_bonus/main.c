#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int	fd;
	char *line;

 	fd = open(argv[argc -1], O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		line = get_next_line(fd);
	}
	close (fd);
	return (0);
}
