/*
** EPITECH PROJECT, 2018
** maze.c
** File description:
** create a maze for dante
*/

#include <stdlib.h>
#include <time.h>
#include "maze.h"

static void free_maze(char **maze)
{
	int i = 0;

	while (maze[i] != NULL) {
		free(maze[i]);
		i++;
	}
	free(maze);
	return;
}

static void print_maze(char **maze)
{
	int i = 0;

	while (maze[i + 1] != NULL) {
		printf("%s\n", maze[i]);
		i++;
	}
	printf("%s", maze[i]);
}

void create_maze(int x, int y, int loop)
{
	char **maze = NULL;

	srand((unsigned)time(NULL));
	maze = get_maze(x, y, loop);
	print_maze(maze);
	free_maze(maze);
}
