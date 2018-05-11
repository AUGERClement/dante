/*
** get_next_line.c for emacs in /home/delphine.godet/PSU_2016_minishell1/src
**
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
**
** Started on  Mon Jan  9 19:09:24 2017 delphine godet
** Last update Sun Apr  9 16:45:58 2017 Delphine Godet
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "my.h"

int		is_line(const char *s)
{
  int	i;

  i = 0;
  while (s[i] != '\0')
    {
      if (s[i] == '\n')
	return (i);
      i++;
    }
  return (-1);
}

char		*get_return_line(char **buf, int nb, size_t len)
{
  char		*line;
  int		len2;

  len2 = is_line(*(buf)) + 1;
  if (is_line(*(buf)) != -1)
    {
      line = xmalloc(is_line(*buf) + 1, 1);
      line = my_strncpy(line, *(buf), is_line(*buf));
      line[is_line(*buf)] = '\0';
      len2 = my_strlen(*buf);
      *(buf) = my_strncpy(*(buf), &buf[0][is_line(*(buf)) + 1], len2);
      return (line);
    }
  if (nb != READ_SIZE && (*buf)[0] != '\0')
    {
      line = xmalloc(1, len + 1);
      line = my_strncpy(line, *(buf), len + 1);
      **(buf) = '\0';
      return (line);
    }
  return (NULL);
}

char		*get_next_line(int fd)
{
  char		*line;
  static char	*buf = NULL;
  static int   	nb = READ_SIZE;
  size_t       	len;

  if (buf == NULL)
    if ((buf = my_realloc(buf, READ_SIZE + 1)) == NULL)
      return (NULL);
  len = my_strlen(buf);
  while (fd != 0 ? nb == READ_SIZE : nb > 0)
    {
      if (is_line(buf) == -1)
	{
	  nb = read(fd, &buf[len], READ_SIZE);
	  buf[len += nb] = '\0';
	  if ((buf = my_realloc(buf, len + READ_SIZE + 1)) == NULL)
	    return (NULL);
	}
      line = get_return_line(&buf, nb, len);
      if (line != NULL)
	return (line);
    }
  return (buf[0] != '\0' ? line = get_return_line(&buf, nb, len) : NULL);
}
