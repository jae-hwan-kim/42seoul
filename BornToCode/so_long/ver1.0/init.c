#include "so_long.h"

void	init_component(t_map *map, t_game *so_long, t_img *image, char **av)
{
	(void)	image;
	(void)	so_long;

	malloc_map(map, av);
	get_mapinfo(map, av);
	get_windowinfo(so_long, map);
	init_window(so_long);
	get_imageinfo(image, so_long, map);
}

void	init_movecount(t_position *position, t_game *game)
{
	position -> x = 0;
	position -> y = 0;
	mlx_hook(game->window, X_EVENT_KEY_PRESS, 0, &press_key, &position);
}

void	init_window(t_game *so_long)
{
	so_long->window = mlx_new_window(so_long->start, so_long->width, so_long->height, GAMENAME);
}

void	init_game(t_game *game)
{
	game -> start = mlx_init();
	if (NULL == game -> start) //error 메시지 함수 만들기
		exit(1);
}