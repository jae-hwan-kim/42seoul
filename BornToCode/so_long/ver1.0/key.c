#include "so_long.h"

int	press_key(int keycode, t_position *position)
{
	if (keycode == KEY_W)
		position -> y++;
	else if (keycode == KEY_S)
		position -> y++;
	else if (keycode == KEY_A)
		position -> x++;
	else if (keycode == KEY_D)
		position -> x++;
	else if (keycode == KEY_ESC)
		exit(0);
	else
		return (0);
	printf("( x, y ) : ( %d, %d )\n", position -> x, position -> y);
	return (0);
}
