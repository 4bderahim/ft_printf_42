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

void print_hex(unsigned int hex, char *base)
{
    if (hex < 17)
        {
            ft_putchar(base[hex]);
        }
    else
    {
        
        print_hex(hex / 16 ,base);
        ft_putchar(base[hex % 16]);
    }
}
int ft_puthex(unsigned int hex, int u)
{
    char *base;
    int len;

    if (u == 0)
        base = strdup("0123456789abcdef");
    else
        base = strdup("0123456789ABCDEF");
    if (!base)
        return (0);
    len = get_length(hex);
    print_hex(hex, base);
    
    free(base);
    return (len);
}



