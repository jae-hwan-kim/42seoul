#include "so_long.h"

int		main(int ac, char **av)
{
	t_game	so_long;
	t_count	position;
	t_map	map;
	t_img	image;
	(void) ac;

	check_ac(ac);
	init_game(&so_long);
	init_component(&map, &so_long, &image, av);
	init_movecount(&position, &so_long);
	mlx_loop(so_long.start);
	return (0);
}