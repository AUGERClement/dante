/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include <string.h>
#include "maze.h"

static int get_error(char **av)
{
	int i = 1;
	int j = 0;

	while (i < 3) {
		j = 0;
		while (av[i][j] != '\0') {
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3 && get_error(av) == 0)
		create_maze(atoi(av[1]), atoi(av[2]), 1);
	else if (ac == 4 && get_error(av) == 0 &&
		strcmp("perfect", av[3]) == 0)
		create_maze(atoi(av[1]), atoi(av[2]), 0);
	else
		return (84);
	return (0);
}
