/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av)
{
	if (ac != 2)
		return (84);
	else if (ac == 2 && my_strcmp("maze.txt", av[1]) == 0)
		solver(av);
	return (0);
}

int solver(char **av)
{
	printf("it work!\n");
	return (0);
}
