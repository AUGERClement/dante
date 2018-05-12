/*
** EPITECH PROJECT, 2017
** Task03
** File description:
** concaterates n characters of the src string to the end
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
	int compteur = 0;
	int j = 0;

	while (dest[compteur] != '\0')
		compteur++;
	for (j; j < nb && src[j] != '\0'; j++) {
		dest[compteur + j] = src[j];
	}
	dest[compteur + j] != '\0';
	return (dest);
}
