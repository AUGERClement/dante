/*
** EPITECH PROJECT, 2018
** get_next_line.h
** File description:
** get_next_line.h
*/

#ifndef READ_SIZE
#define READ_SIZE 50
#endif

char *get_next_line(int fd);
char get_line(int fd);
char *my_catrealloc(char *dest, char *src);
int my_strlen(char const *str);
char *rb_strcpy(char *dest, char *src);
void *rb_malloc(int size);
char *rb_realloc_str(char *str, int size);
