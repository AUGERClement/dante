/*
** EPITECH PROJECT, 2018
** solver.c
** File description:
** solver.c
*/

#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "my.h"
#include "get_next_line.h"

static int get_width_maze(int fd)
{
	int width_size = 0;
	char *line = get_next_line(fd);

	if (line == NULL)
		return (84);
	width_size = strlen(line);
	free(line);
	return (width_size);
}

static int get_height_maze(solver_t *ptr)
{
	char line[ptr->width];
	int size = 0;
	int count = 1;

	while ((size = read(ptr->fd, line, ptr->width + 1)) > 0) {
		if (size == 0)
			return (84);
		count++;
	}
	return (count);
}

static solver_t *initialize_struct(void)
{
	solver_t *ptr = malloc(sizeof(solver_t));

	if (ptr == NULL)
		return (NULL);
	ptr->maze = NULL;
	ptr->width = 0;
	ptr->height = 0;
	ptr->fd = 0;
	return (ptr);
}

static int generate_maze_size(solver_t *ptr)
{
	int i = 0;

	ptr->maze = malloc(sizeof(char *) * ptr->width);
	if (ptr->maze == NULL)
		return (84);
	while (i < ptr->width) {
		ptr->maze[i] = malloc(sizeof(char) * ptr->height);
		if (ptr->maze[i] == NULL)
			return (84);
		i++;
	}
	return (0);
}

int solver(char **av)
{
	solver_t *ptr = initialize_struct();

	ptr->fd = open(av[1], O_RDONLY);
	if (ptr->fd == -1)
		return (84);
	ptr->width = get_width_maze(ptr->fd);
	ptr->height = get_height_maze(ptr);
	if (ptr->width == 84 || ptr->height == 84)
		return (84);
	if (generate_maze_size(ptr) == 84)
		return (84);
	free_ptr(ptr);
	return (0);
}
