#include "so_long.h"

void	init_position(t_position *position)
{
	position -> x = 0;
	position -> y = 0;
}

void	init_game(t_game *game)
{
	game -> start = mlx_init();
	if (NULL == game -> start) //error 메시지 함수 만들기
		exit(1);
}