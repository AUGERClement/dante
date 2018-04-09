/*
** EPITECH PROJECT, 2017
** Task02
** File description:
** concatenate two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int count = 0;

	while (dest[count] != '\0')
		count++;
	for (int i = 0; src[i] != '\0'; i++)
		dest[count + i] = src[i];
	dest[count + 1] = '\0';
	return (dest);
}
