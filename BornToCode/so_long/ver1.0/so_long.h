#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define GAMENAME "so_long"
# define TILE 50
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53

# define EMPTY "image/0_empty.xpm"
# define WALL "image/1_wall.xpm"
# define ITEM "image/2_item.xpm"
# define EXIT "image/3_exit.xpm"
# define PLAYER "image/4_player.xpm"
# define ENEMY "image/5_enemy.xpm"

# define X_EVENT_KEY_PRESS 2
# define X_EVENT_KEY_RELEASE 3
# define BUFFER_SIZE 1024

typedef struct s_game
{
	void	*start;
	void	*window;
	int		width;
	int		height;
}	t_game;

typedef struct s_position
{
	int	x;
	int	y;
}	t_position;

typedef struct s_map
{
	int		fd;
	int		row;
	int		columns;
	size_t	size;
	char	*map;
}	t_map;

typedef struct s_img
{
	void	*id;
	int		width;
	int		height;
}	t_img;

void	init_component(t_map *map, t_game *so_long, t_img *image, char **av);
void	init_movecount(t_position *position, t_game *game);
void	init_game(t_game *game);
void	init_window(t_game *so_long);
void	get_mapinfo(t_map *map, char **av);
void	get_windowinfo(t_game *so_long, t_map *map);
void	get_imageinfo(t_img *image, t_game *so_long, t_map *map);

int		press_key(int keycode, t_position *position);

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s1, int c);
size_t	ft_strlen(const char *s1);
void	malloc_map(t_map *map, char **av);

#endif