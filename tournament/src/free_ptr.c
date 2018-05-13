/*
** EPITECH PROJECT, 2018
** free_ptr.c
** File description:
** free_ptr.c
*/

#include <stdlib.h>
#include "my.h"
#include "get_next_line.h"

void free_ptr(solver_t *ptr)
{
	int count = 0;

	while (count != ptr->width) {
		free(ptr->maze[count]);
		count++;
	}
	free(ptr->maze);
	free(ptr);
}
