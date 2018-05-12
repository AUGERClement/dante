/*
** EPITECH PROJECT, 2017
** 08
** File description:
** my_sort_int_array.c
*/

#include "my.h"

void my_swap_elem(int *tab, int a1, int a2)
{
	int temp = tab[a1];

	tab[a1] = tab[a2];
	tab[a2] = temp;
}

int my_sort_int_array(int *tab, int size)
{
	for (int count = 0; count != size; count++)
		for (int j = 0; j != size - 1; j++)
			if (tab[j + 1] < tab[j])
				my_swap_elem(tab, j + 1, j);
	return (0);
}
