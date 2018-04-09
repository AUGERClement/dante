/*
** EPITECH PROJECT, 2017
** Task02
** File description:
** write a function copies n char from a string into another
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
	for (int i = 0; src[i] != '\0' && i < n; i++) {
		dest[i] = src[i];
	}
	for (int i = 0; i < n; i++) {
		dest[i] = '\0';
	}
	return (dest);
}
