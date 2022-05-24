#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE 1024
# define X_EVENT_KEY_PRESS 2
# define X_EVENT_KEY_RELEASE 3

# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53

typedef struct s_game
{
	void	*start;
	void	*window;
}	t_game;

typedef struct s_position
{
	int	x;
	int	y;
}	t_position;

void	init_position(t_position *position);
void	init_game(t_game *game);
int		press_key(int keycode, t_position *position);

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s1, int c);
size_t	ft_strlen(const char *s1);

#endif