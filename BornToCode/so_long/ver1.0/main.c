#include "so_long.h"

void	init_map(t_game *game, char **av)
{
	int		fd;
	// char	*temp;
	char	*map;
	(void)	game;

	fd = open(av[1], O_RDONLY);
	map = get_next_line(fd);
	printf("first_line : %s\n", map);

}

int		main(int ac, char **av)
{
	t_game	so_long;
	t_position	position;
	(void) ac;
	// 이미지 구조체로 만들기
	// void	*img_ptr;
	// int	width  = 50;
	// int	height = 50;

	init_game(&so_long);
	init_position(&position);
	so_long.window = mlx_new_window(so_long.start, 500, 500, "so_long");
	init_map(&so_long, av);
	mlx_hook(so_long.window, X_EVENT_KEY_PRESS, 0, &press_key, &position);
	// img_ptr = mlx_xpm_file_to_image(so_long.start, "textures/wall_n.xpm", &width, &height);
	// mlx_put_image_to_window(so_long.start, so_long.window, img_ptr, 0, 0);
	mlx_loop(so_long.start);
	return (0);
}