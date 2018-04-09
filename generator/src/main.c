/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av)
{
	if (ac == 3 && get_error(av) == 0)
		imperfect_maze(av);
	else if (ac == 4 && get_error(av) == 0 &&
		my_strcmp("perfect", av[3]) == 0)
		perfect_maze(av);
	else
		return (84);
	return (0);
}

int get_error(char **av)
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
