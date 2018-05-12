/*
** EPITECH PROJECT, 2018
** maze_transform.c
** File description:
** transform a perfect into impecfect maze
*/

#include "maze.h"

static void open_wall(char **maze, int x, int y)
{

	if (y - 2 >= 0 && x - 1 >= 0)
		maze[y - 2][x - 1] = VOID;
	if (y - 1 >= 0 && x - 2 >= 0)
		maze[y - 1][x - 2] = VOID;
}

void break_some_wall(char **maze, int x, int y)
{
	int i = 0;
	int moy = (x + y) / 2;
	int randx = rand() % x;
	int randy = rand() % y;

	open_wall(maze, x, y);
	while (i < moy) {
		if (maze[randy][randx] == WALL) {
			maze[randy][randx] = VOID;
		}
		randx = rand() % x;
		randy = rand() % y;
		i++;
	}
}
