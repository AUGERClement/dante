/*
** one.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs_for_printf/conversion_specifiers
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:26:13 2016 delphine godet
** Last update Tue Jan 31 21:01:34 2017 delphine godet
*/

#include "my.h"

/* %o */
void     my_mod_o(char *fmt, int i, va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  if (fmt[i - 1] == '#')
    {
      if (nb != 0)
	my_putchar('0');
    }
  my_put_uint_base(nb, "01234567");
}

/* %u */
void     my_mod_u(char *fmt, int i, va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_put_uint_base(nb, "0123456789");
}

/* %x */
void     my_mod_x(char *fmt, int i, va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  if (fmt[i - 1] == '#')
    {
      if (nb != 0)
	my_putstr("0x");
    }
  my_put_uint_base(nb, "0123456789abcdef");
}

/* %X */
void     my_mod_xmaj(char *fmt, int i, va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  if (fmt[i - 1] == '#')
    {
      if (nb != 0)
	my_putstr("0X");
    }
  my_put_uint_base(nb, "0123456789ABCDEF");
}

/* %b */
void     my_mod_b(char *fmt, int i, va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_put_uint_base(nb, "01");
}
