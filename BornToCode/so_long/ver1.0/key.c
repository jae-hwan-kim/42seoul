#include "so_long.h"

int	press_key(int keycode, t_count *count)
{
	if (keycode == KEY_W)
		count -> y++;
	else if (keycode == KEY_S)
		count -> y++;
	else if (keycode == KEY_A)
		count -> x++;
	else if (keycode == KEY_D)
		count -> x++;
	else if (keycode == KEY_ESC)
		exit(0);
	else
		return (0);
	printf("( x, y ) : ( %d, %d )\n", count -> x, count -> y);
	return (0);
}
