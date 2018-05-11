/*
** printing.c for dante in /home/yami/dante/depth/srcs/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 06:53:57 2017 Delphine Godet
** Last update Wed May 17 16:10:36 2017 Delphine Godet
*/

#include <unistd.h>

void		print_maze(char **maze)
{
  size_t	i;
  size_t	j;

  i = j = 0;
  while (maze[i] != NULL)
    {
      j = 0;
      while (maze[i][j] != '\0')
	{
	  if (maze[i][j] == '-')
	    write(1, "*", 1);
	  else
	    write(1, &maze[i][j], 1);
	  j++;
	}
      write(1, "\n", 1);
      i++;
    }
}
