/*
** fct_ptrs.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 04:58:15 2017 Delphine Godet
** Last update Thu May 11 05:33:52 2017 Delphine Godet
*/

#include <stddef.h>

#include "generator.h"

t_fctptr_bias	bias_tab[] =
    {
{NE, &link_cells_ne, &generate_and_link_cells_ne, &imperfect_maze_ne},
{NW, &link_cells_nw, &generate_and_link_cells_nw, &imperfect_maze_nw},
{SE, &link_cells_se, &generate_and_link_cells_se, &imperfect_maze_se},
{SW, &link_cells_sw, &generate_and_link_cells_sw, &imperfect_maze_sw},
{NUL, NULL, NULL, NULL}
};
