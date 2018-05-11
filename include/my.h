/*
** my.h for emacs in /home/delphine.godet
**
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
**
** Started on  Thu Oct 13 08:27:45 2016 delphine godet
** Last update Thu May 11 05:51:12 2017 Delphine Godet
*/

#ifndef MY_H_
# define MY_H_

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

/*
** get_next_line
*/
# ifndef READ_SIZE
#  define READ_SIZE 1
# endif

/*
** fct_ptr_tab
*/
typedef struct  s_specifiers
{
  char          c;
  void		(*fct)(char *, int, va_list);
}               t_specifiers;

/*
** printing
*/
void	my_putchar(char);
void	my_putstr(char *);
void	my_putstr_error(char *);
void	my_put_nbr(int);
void	my_putnbr_base(int, char *);
void	my_put_uint_base(unsigned int, char *);
void	my_put_uintptr_t_base(uintptr_t, char *);
void	my_showstr(char *);

/*
** hold_strs
*/
char	*my_strcpy(char *, char *);
char	*my_strncpy(char *, char *, size_t);
char	*my_strcat(char *, char *);
char	*my_strncat(char *, char *, size_t);
int	my_strcmp(char *, char *);
int	my_strncmp(char *, char *, size_t);
int	my_strcmp_nocase(char *, char *);
char	*epur_str(char *);
int	is_there_token(char *, char);

/*
** nbr_hold
*/
int	my_power_rec(int, int);
int	my_isneg(int);
int	my_swap(int *, int *);
int	my_getnbr(char *);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_itoa(int);

/*
** str_change
*/
char	*my_revstr(char *);
char	*my_strupcase(char *);
char	*my_strlowcase(char *);
char	*my_strcapitalize(char *);
char	*my_char_swap(char *, size_t, size_t);

/*
** str_def
*/
int	my_str_isalpha(char *);
int	my_str_isnum(char *);
int	my_str_islower(char *);
int	my_str_isupper(char *);
int	my_str_isprintable(char *);
size_t	my_strlen(char *);

/*
** mem_hold
*/
void	free_tab(char **tab);
char	*get_next_line(int);
char	*my_memset(char *, char, size_t);
char	*my_realloc(char *, size_t);
char	*my_strdup(char *);
char	*my_strndup(char *, size_t);
char	*my_strsep(char **, const char *);
char	**my_tabdup(char **);
void	*xmalloc(size_t, size_t);

/*
** srcs_for_printf
*/
char	*my_stock_nbr_base(int, char *, char *, int);
char	*my_padd_nbr_base(int, char *);

/*
** helps
*/
int	sum_stdarg(int, int, ...);
int	disp_stdarg(char *, ...);

/*
** conversion_specifiers
*/
void	my_mod_s(char *, int, va_list);
void	my_mod_smaj(char *, int, va_list);
void	my_mod_c(char *, int, va_list);
void	my_mod_d(char *, int, va_list);
void	my_mod_o(char *, int, va_list);
void	my_mod_u(char *, int, va_list);
void	my_mod_x(char *, int, va_list);
void	my_mod_xmaj(char *, int, va_list);
void	my_mod_b(char *, int, va_list);
void	my_mod_p(char *, int, va_list);
void	my_mod_mod(char *, int, va_list);
int	my_printf(char *, ...);

#endif
