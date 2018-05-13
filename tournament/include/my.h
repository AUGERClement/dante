/*
** EPITECH PROJECT, 2017
** Task02
** File description:
** File contain the prototypes of all fcts in my libmy.a
*/

#ifndef MY_LIB
#define MY_LIB

#include <unistd.h>

typedef struct solver_s {
	char **maze;
	int width;
	int height;
	int fd;
}solver_t;

int solver(char **av);
void free_ptr(solver_t *ptr);

#endif
