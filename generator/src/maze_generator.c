/*
** EPITECH PROJECT, 2018
** maze_generator
** File description:
** generate a small maze
*/

#include <stdlib.h>
#include "maze.h"

static char **malloc_maze(int x, int y)
{
	int i = 0;
	int j = 0;
	char **maze = malloc(sizeof(char *) * (y + 1));

	if (maze == NULL)
		exit(84);
	maze[y] = NULL;
	while (i < y) {
		maze[i] = malloc(sizeof(char) * (x + 1));
		if (maze[i] == NULL)
			exit(84);
		maze[i][x] = '\0';
		while (j != x) {
			maze[i][j] = WALL;
			j++;
		}
		i++;
		j = 0;
	}
	maze[y - 1][x - 1] = VOID;
	return (maze);
}

char **get_maze(int x, int y, int loop)
{
	char **maze = malloc_maze(x, y);

	prepare_maze(maze);
	binary_tree(maze, y);
	if (x == 2 && y == 2 && loop == 0) {
		maze[1][0] = WALL;
	}
	if (loop)
		break_some_wall(maze, x, y);
	return (maze);
}
