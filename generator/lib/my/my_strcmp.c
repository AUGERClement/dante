/*
** EPITECH PROJECT, 2017
** 17
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
	int count = 0;

	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
		count++;
	return (s1[count] - s2[count]);
}
