#include <unistd.h>
#include <stdio.h>

int check_double_on_next(char **av, int index) {
	int index2 = 0;

	while (av[2][index2] != 0) {
		if (av[1][index] != av[2][index2]) {
			index2++;
		} else {
			return (1);
		}
	}
	return (0);
}

int check_double_on_mine(char **av, int index) {
	int index2 = 0;
	
	while (index2 < index) {
		if (av[1][index2] != av[1][index]) {
			index2++;
		} else {
			return (0);
		}
	}
	return (1);
}

void write_string(char **av) {
	int i = 0;

	while (av[1][i] != 0) {
		if (check_double_on_mine(av, i) == 1) {
			if (check_double_on_next(av, i) == 1) {
				write(1, &av[1][i], 1);
			}
		}
		i++;
	}
}

int		main(int ac, char **av) {
	if(ac == 3) {
		write_string(av);
	}
	write(1, "\n", 1);
	return (0);
}