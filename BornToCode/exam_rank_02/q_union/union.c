#include <unistd.h>
#include <stdio.h>

int check_double_on_next(char **av, int index) {
	int index2 = 0;

	while (av[1][index2] != 0) {
		if (av[2][index] != av[1][index2]) {
			index2++;
		} else {
			return (0);
		}
	}
	return (1);
}

int check_double_on_mine(char **av, int index, int check) {
	int index2 = 0;
	
	while (index2 < index) {
		if (av[check][index2] != av[check][index]) {
			index2++;
		} else {
			return (0);
		}
	}
	return (1);
}

void write_second_string(char **av) {
	int i = 0;

	while (av[2][i] != 0) {
		if (check_double_on_mine(av, i, 2) == 1) {
			if (check_double_on_next(av, i) == 1) {
				write(1, &av[2][i], 1);
			}
		}
		i++;
	}
}

void write_first_string(char **av) {
	int i = 0;

	while (av[1][i] != 0) {
		if (check_double_on_mine(av, i, 1) == 1) {
			write(1, &av[1][i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av) {
	if(ac == 3) {
		write_first_string(av);
		write_second_string(av);
	}
	write(1, "\n", 1);
	return (0);
}