/*
** EPITECH PROJECT, 2018
** maze.h
** File description:
** header for maze
*/

#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define WALL 'X'
#define VOID '*'

void create_maze(int x, int y, int loop);
char **get_maze(int x, int y, int loop);
void prepare_maze(char **maze);
void binary_tree(char **maze, int y);
void break_some_wall(char **maze, int x, int y);
