#include "so_long.h"

void	get_windowinfo(t_game *so_long, t_map *map)
{
	so_long->width = map->row * TILE;
	so_long->height = map->columns * TILE;
}

void	malloc_map(t_map *map, char **av)
{
	char	*temp;

	map->fd = open(av[1], O_RDONLY);
	temp = get_next_line(map->fd);
	map->row = ft_strlen(temp);
	map->columns = 0;
	while (0 != temp)
	{
		temp = get_next_line(map->fd);
		map->columns++;
	}
	map->size = map->columns * (map->row - 1);
	map->map = malloc(sizeof(char *) * (map->size + 1));
	map->map[map->size] = 0;
	map->row -= 1;
	close(map->fd);
}

void	get_mapinfo(t_map *map, char **av)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	map->fd = open(av[1], O_RDONLY);
	temp = get_next_line(map->fd);
	while (0 != temp)
	{
		j = 0;
		while (0 != temp[j] && '\n' != temp[j])
		{
			map->map[i] = temp[j];
			i++;
			j++;
		}
		temp = get_next_line(map->fd);
	}
	printf("%s\n", map->map);
	close(map->fd);
}