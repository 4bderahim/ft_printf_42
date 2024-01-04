#include "ft_printf.h"

int avg_func(va_list varg,const char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i+1] == 'd' || s[i+1] == 'i')// || s[i+1] == 'D')
            return ft_putnbr(va_arg(varg, int));
	    else if (s[i+1] == 's')
			return (ft_putstr(va_arg(varg, char *)));
		else if (s[i+1] == 'c')
            return (ft_putchar(va_arg(varg, int)));
		else if (s[i+1] == '%')
		 	return (ft_putchar('%'));
        else if (s[i+1] == 'u')
		 	return (ft_putunsigned(va_arg(varg,unsigned int)));
         else if (s[i+1] == 'x')
		 	return (ft_puthex(va_arg(varg, unsigned int), 0));
        else if (s[i+1] == 'X')
		 	return (ft_puthex(va_arg(varg, unsigned int), 1));
        else if (s[i+1] == 'p')
		 	return (ft_putptr(va_arg(varg, void *)));
		else
			i++;
    }
    return (0);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    int i;
    int length_to_return;

    length_to_return = 0;
    i = 0;
    va_start(args, s);
    while (s[i])
    {
        if (s[i] == '%')
        {
            length_to_return += avg_func(args, s+i);
            i++;
        }  
        else
            {
                ft_putchar(s[i]);
                length_to_return++;
            }
        i++;
    }

    va_end(args);
    return (length_to_return);
}



