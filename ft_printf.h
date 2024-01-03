
#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>

int	ft_putstr(char *s);
int ft_putchar(char c);
int ft_printf(const char *s, ...);
int ft_putnbr(int n);
int ft_putunsigned(unsigned int n, int count);


#endif