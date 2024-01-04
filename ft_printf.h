
#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int	ft_putstr(char *s);
int ft_putchar(char c);
int ft_printf(const char *s, ...);
int ft_putnbr(int n);
int ft_putunsigned(unsigned int n);
int ft_puthex(unsigned int hex, int u);
int ft_putptr(void *ptr);

#endif