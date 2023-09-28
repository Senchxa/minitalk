#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>


int				ft_atoi(char *str);
int				ft_printf(char const *content, ...);
int				ft_printchar(char c);
int				ft_printdec(int nb);
int				ft_printhexa(unsigned long long n, char c);
int				ft_printptr(unsigned long long ptr);
int				ft_printstring(char *str);
int				ft_printunsigned(unsigned int uns);
int				ft_putchar(char c);
#endif
