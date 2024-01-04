#include "ft_printf.h"

static int get_length(unsigned int n)
{
    int i;

    i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

void print_ptr(unsigned long hex, char *base)
{
    if (hex < 17)
        {
            ft_putchar(base[hex]);
        }
    else
    {
        print_ptr(hex / 16 ,base);
        ft_putchar(base[hex % 16]);
    }
}
int ft_putptr(void *ptr)
{
    char *base;
    unsigned long p;
    int len;
    
    ft_putchar('0');
    ft_putchar('x');
    
    p =(unsigned long) ptr;
   
    
    base = strdup("0123456789abcdef");
    if (!base)
        return (0);
    len = get_length(p);
    print_ptr(p, base);
    
    free(base);
    return (len+2);
}



