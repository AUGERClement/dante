/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** get_next_line.c
*/

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *get_next_line(int fd)
{
	char count = get_line(fd);
	int sentence = 0;
	char *str = malloc(sizeof(char) * READ_SIZE + 1);

	if (str == NULL)
		return (0);
	while (count != '\n' && count != '\0') {
		str[sentence] = count;
		str[sentence + 1] = '\0';
		count = get_line(fd);
		if (sentence / (READ_SIZE + 1) == 0)
			str = rb_realloc_str(str, sentence + READ_SIZE + 1);
		sentence++;
	}
	str[sentence] = '\0';
	if (str[0] == '\0')
		return (0);
	return (str);
}

char get_line(int fd)
{
	static char buffer[READ_SIZE];
	static char *ptr;
	static int size = 0;
	char sentence;

	if (size == 0) {
		if ((size = read(fd, buffer, READ_SIZE)) == 0)
			return (0);
		ptr = (char*)buffer;
	}
	size--;
	sentence = *ptr;
	ptr++;
	return (sentence);
}

char *rb_realloc_str(char *str, int size)
{
	char *dest;

	if (str == NULL) {
		dest = rb_malloc(size);
		dest[0] = '\0';
	}
	dest = rb_malloc(size);
	rb_strcpy(dest, str);
	free(str);
	return (dest);
}

void *rb_malloc(int size)
{
	char *buffer;

	if (size == 0)
		return (0);
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (0);
	return (buffer);
}

char *rb_strcpy(char *dest, char *src)
{
	int count;

	if (dest == NULL)
		return (NULL);
	else if (src == NULL)
		return (NULL);
	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];
	dest[count] = '\0';
	return (dest);
}
