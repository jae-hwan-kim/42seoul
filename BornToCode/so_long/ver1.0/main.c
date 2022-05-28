#include "so_long.h"

// // start_position(player->map, player);
// // - 오른쪽 → index + 1
// // - 왼쪽 → index - 1
// // - 위 → index - row
// // - 아래 → index + row
// // - 해당 위치의 인자 확인
// // - 1이면 그림 안바뀜(이동x)
// // - 0, C, E 이면 그림 바뀜
// // - E에 도착했을 때 C가 인자에 남아있으면 종료 안됨
// // - (캐릭터를 이용할까? C를 다먹기전까지는 적이 E 앞에 있음. 다 먹으면 적 사라짐)

void	init_player(t_player *player, t_game *game, t_map *map, t_img *image)
{
	player->game = game;
	player->map = map;
	player->image = image;
	player->position = 0;
	player->x = 0;
	player->y = 0;
	player->move_count = 0;
}

void	set_position(t_player *player)
{
	int			i;
	char		*map_arr;
	
	i = 0;
	map_arr= player->map->map;
	while (0 != map_arr[i])
	{
		if ('P' == map_arr[i])
			break;	
		i++;
	}
	player->position = i;
	player->x = (player->position % player->map->row);
	player->y = (player->position) / player->map->row;
}

int	press_key(int keycode, t_player *player)
{
	char	*map_arr;
	void	*id;
	
	set_position(player);
	map_arr = player->map->map;
	if (keycode == KEY_W)
	{
		map_arr[player->position] = '0';
		printf("0. P : %d, %d, %d\n", player->position, player->x, player->y);
		id = mlx_xpm_file_to_image(player->game, EMPTY, &player->image->width, &player->image->height);
		mlx_put_image_to_window(player->game, player->game->window, id, TILE * player->x, TILE * player->y);
		player->position = player->position - player->map->row;
		printf("1. P : %d, %d, %d\n", player->position, player->x, player->y);
		map_arr[player->position] = 'P';
		set_position(player);
		printf("2. P : %d, %d, %d\n", player->position, player->x, player->y);
		id = mlx_xpm_file_to_image(player->game, PLAYER, &player->image->width, &player->image->height);
		mlx_put_image_to_window(player->game, player->game->window, id, TILE * player->x, TILE * player->y);
	}
	else if (keycode == KEY_S)
	{
		map_arr[player->position] = '0';
		printf("0. P : %d, %d, %d\n", player->position, player->x, player->y);
		id = mlx_xpm_file_to_image(player->game, EMPTY, &player->image->width, &player->image->height);
		mlx_put_image_to_window(player->game, player->game->window, id, TILE * player->x, TILE * player->y);
		player->position = player->position + player->map->row;
		printf("1. P : %d, %d, %d\n", player->position, player->x, player->y);
		map_arr[player->position] = 'P';
		set_position(player);
		printf("2. P : %d, %d, %d\n", player->position, player->x, player->y);
		id = mlx_xpm_file_to_image(player->game, PLAYER, &player->image->width, &player->image->height);
		mlx_put_image_to_window(player->game, player->game->window, id, TILE * player->x, TILE * player->y);
	}
	else if (keycode == KEY_A)
	{
		map_arr[player->position] = '0';
		printf("0. P : %d, %d, %d\n", player->position, player->x, player->y);
		id = mlx_xpm_file_to_image(player->game, EMPTY, &player->image->width, &player->image->height);
		mlx_put_image_to_window(player->game, player->game->window, id, TILE * player->x, TILE * player->y);
		player->position = player->position - 1;
		printf("1. P : %d, %d, %d\n", player->position, player->x, player->y);
		map_arr[player->position] = 'P';
		set_position(player);
		printf("2. P : %d, %d, %d\n", player->position, player->x, player->y);
		id = mlx_xpm_file_to_image(player->game, PLAYER, &player->image->width, &player->image->height);
		mlx_put_image_to_window(player->game, player->game->window, id, TILE * player->x, TILE * player->y);
	}
	else if (keycode == KEY_D)
	{
		map_arr[player->position] = '0';
		printf("0. P : %d, %d, %d\n", player->position, player->x, player->y);
		id = mlx_xpm_file_to_image(player->game, EMPTY, &player->image->width, &player->image->height);
		mlx_put_image_to_window(player->game, player->game->window, id, TILE * player->x, TILE * player->y);
		player->position = player->position + 1;
		printf("1. P : %d, %d, %d\n", player->position, player->x, player->y);
		map_arr[player->position] = 'P';
		set_position(player);
		printf("2. P : %d, %d, %d\n", player->position, player->x, player->y);
		id = mlx_xpm_file_to_image(player->game, PLAYER, &player->image->width, &player->image->height);
		mlx_put_image_to_window(player->game, player->game->window, id, TILE * player->x, TILE * player->y);
	}
	else if (keycode == KEY_ESC)
		exit(0);
	else
		return (0);
	player -> move_count++;
	printf("move count : %d\n", player->move_count);
	return (0);
}

void	control_function(t_map *map, t_game *game, t_img *image)
{
	t_player	*player;

	player = (t_player *)malloc(sizeof(t_player));
	init_player(player, game, map, image);
	mlx_hook(player->game->window, X_EVENT_KEY_PRESS, 0, &press_key, player);
}

int		main(int ac, char **av)
{
	t_game	so_long;
	t_map	map;
	t_img	image;
	(void) ac;

	check_ac(ac);
	init_game(&so_long);
	init_component(&map, &so_long, &image, av);
	// init_movecount(&count, &so_long);
	control_function(&map, &so_long, &image);
	mlx_loop(so_long.start);
	return (0);
}