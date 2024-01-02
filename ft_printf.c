
#include "ft_printf.h"

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
        ft_putchar(s[i]);
        if (s[i] == '%' && s[i] == 'd')
			length_to_return += ft_putnbr(va_arg(args, int));
		if (s[i] == '%' && s[i] == 's')
			length_to_return += ft_putnbr(va_arg(args, char *));
		if (s[i] == '%' && s[i] == 'c')
			length_to_return += ft_putchar(va_arg(args, char));
		else
			i++;
        i++;
    }
    va_end(args);
    return (length_to_return);
}

// int main()
// {
//     char c[] = "NOne of the above!";
// 	int x = 9;
//     int t = ft_printf("%d%D", x, x);
//     printf("[%d]", t);
//     return (0);
// }

