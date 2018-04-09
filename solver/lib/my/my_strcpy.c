/*
** EPITECH PROJECT, 2017
** Task01
** File description:
** Write a function that copies a sting into another
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
	int i = 0;

	for (i; src[i] != '\0'; i++) {
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
