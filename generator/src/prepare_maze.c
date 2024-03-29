/*
** EPITECH PROJECT, 2018
** prepare_maze.c
** File description:
** prepare a maze
*/

#include "maze.h"

static void prepare_line(char *line)
{
	int i = 0;

	while (line[i] != '\0') {
		if (i % 2 == 0)
			line[i] = VOID;
		i++;
	}
}

void prepare_maze(char **maze)
{
	int i = 0;

	while (maze[i] != NULL) {
		if (i % 2 == 0)
			prepare_line(maze[i]);
		i++;
	}
}
