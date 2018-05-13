/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av)
{
	if (ac == 2 && av[1] != NULL)
		return (solver(av));
	else
		return (84);
}
