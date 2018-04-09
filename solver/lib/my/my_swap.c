/*
** EPITECH PROJECT, 2017
** Task01
** File description:
** Swaps the content of two integers
*/

#include "my.h"

void my_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
