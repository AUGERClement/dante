/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** reproduce the behaviour of the printf function
*/

#include "my.h"

int first(char const format, va_list my_list)
{
		if (format == 'd' || format == 'i')
			my_put_nbr(va_arg(my_list, int));
		if (format == 'c')
			my_putchar(va_arg(my_list, int));
		if (format == 'b') {
			char *base = "01";
			my_put_nbr_base(va_arg(my_list, unsigned int), base);
		}
		if (format == 'p') {
			char *base = "0123456789abcdef";
			my_putstr("0x");
			my_put_nbr_base(va_arg(my_list, unsigned int), base);
		}
		if (format == 's')
			my_putstr(va_arg(my_list, char *));
		if (format == 'S')
			my_str_is_printable(va_arg(my_list, char *));
		return (format);
}

int base(char const format, va_list my_list)
{
		if (format == 'o') {
			char *base = "01234567";
			my_put_nbr_base(va_arg(my_list, unsigned int), base);
		}
		if (format == 'X') {
			char *base = "0123456789ABCDEF";
			my_put_nbr_base(va_arg(my_list, unsigned int), base);
		}
		if (format == 'x') {
			char *base = "0123456789abcdef";
			my_put_nbr_base(va_arg(my_list, unsigned int), base);
		}
		if (format == 'u') {
			char *base = "0123456789";
			my_put_nbr_base(va_arg(my_list, unsigned int), base);
		}
		return (format);
}

int my_printf(char const *format, ...)
{
	int count = 0;
	va_list my_list;
	va_start(my_list, format);

	while (format[count] != '\0') {
		if (format[count] != '%')
			my_putchar(format[count]);
		if (format[count] == '%' && format[count+1] == '%')
			my_putchar('%');
		if (format[count] == '%') {
			first(format[count+1], my_list);
			base(format[count+1], my_list);
			count++;
		}
		count++;
	}
	va_end(my_list);
	return (0);
}
