#include "so_long.h"

typedef struct s_list
{
	char			content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(char content)
{
	t_list	*n_list;

	n_list = (t_list *)malloc(sizeof(t_list));
	if (n_list == 0)
		return (0);
	n_list -> content = content;
	n_list -> next = 0;
	return (n_list);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (new == 0)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	new->next = 0;
}

// void	make_temp_list(t_list *temp_list, char *temp)
// {
// 	int	i;

// 	i = 0;
// 	if (0 == temp)
// 		return ;
// 	while (0 != temp[i] && '\n' != temp[i])
// 	{
// 		printf("str[%d]: %c\n", i, temp[i]);
// 		ft_lstadd_back(&temp_list, ft_lstnew(temp[i]));
// 		i++;
// 	}
// }

void	init_map(char **av)
{
	//맵 랜더링하는 구조체에 변수로 넣기
	int		fd;
	size_t	length;
	int		line_number;
	char	*map;
	char	*temp;
	int		i;
	int		j;

	fd = open(av[1], O_RDONLY);
	//사이즈 구하는 함수로 모듈화
	temp = get_next_line(fd);
	length = ft_strlen(temp);
	line_number = 0;
	i = 0;
	while (0 != temp)
	{
		// 마지막 문장은 널로 끝나기 때문에 같을 수가 없다.
		// if (length != ft_strlen(temp))

		// 	printf("Error\n"); //함수 수정해야함
		// make_temp_list(temp_list, temp);
		temp = get_next_line(fd);
		line_number++;
	}
	printf("%d\n", line_number);
	length = line_number * (length - 1);
	printf("%zu\n", length);
	map = malloc(sizeof(char *) * (length + 1));
	map[length] = 0;
	close(fd);

	fd = open(av[1], O_RDONLY);
	temp = get_next_line(fd);
	while (0 != temp)
	{
		j = 0;
		while (0 != temp[j] && '\n' != temp[j])
		{
			map[i] = temp[j];
			i++;
			j++;
		}
		temp = get_next_line(fd);
	}
	printf("%s\n", map);
	printf("str: %zu\n", ft_strlen(map));
	close(fd);
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
	init_map(av);
	mlx_hook(so_long.window, X_EVENT_KEY_PRESS, 0, &press_key, &position);
	// img_ptr = mlx_xpm_file_to_image(so_long.start, "textures/wall_n.xpm", &width, &height);
	// mlx_put_image_to_window(so_long.start, so_long.window, img_ptr, 0, 0);
	mlx_loop(so_long.start);
	return (0);
}