/*
** EPITECH PROJECT, 2018
** eller.h
** File description:
** header eller
*/

char **get_map(int len, int heght);
void set_first_line(char *line);
char **eller(int len, int height);
char space_or_wall(void);
void set_next_line(char *prev, char *act);
void find_paths(char *line, char *next);

