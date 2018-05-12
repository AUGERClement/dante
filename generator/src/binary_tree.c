/*
** EPITECH PROJECT, 2018
** binary_tree.c
** File description:
** create a maze by binary_tree
*/

#include "maze.h"

static void drill_issue(int coor, char *line, char *prev)
{
	int tmp = 0;

	if (coor - 1 < 0) {
		prev[coor] = VOID;
		return;
	}
	tmp = (rand() % 2);
	if (tmp == 0) {
		prev[coor] = VOID;
	} else {
		line[coor - 1] = VOID;
	}
	return;
}

static void open_end(char *prev)
{
	int i = 0;

	while (prev[i] != '\0')
		i++;
	i -= 2;
	if (i < 0)
		return;
	prev[i] = VOID;
}

static void edit_line(char *line, char *prev)
{
	int i = 0;

	if (line == NULL) {
		open_end(prev);
		return;
	}
	while (line[i] != '\0') {
		if (i % 2 == 0) {
			drill_issue(i, line, prev);
		}
		i++;
	}
}

static void carve_first_line(char *line)
{
	int i = 0;

	while (line[i] != '\0') {
		line[i] = VOID;
		i++;
	}
}

void binary_tree(char **maze, int y)
{
	carve_first_line(maze[0]);
	while (y > 1) {
		if (y % 2 == 0)
			edit_line(maze[y], maze[y - 1]);
		y--;
	}
	return;
}
