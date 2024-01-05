#include "ft_printf.h"

static void	print_ptr(unsigned long hex, char *base, int *length)
{
	if (hex < 16)
	{
		*length += 1;
		ft_putchar(base[hex]);
	}
	else
	{
		*length += 1;
		print_ptr(hex / 16, base, length);
		ft_putchar(base[hex % 16]);
	}
}
int	ft_putptr(void *ptr)
{
	char			*base;
	unsigned long	p;
	int				len;
    
	ft_putchar('0');
	ft_putchar('x');
	p = (unsigned long)ptr; 
	base = "0123456789abcdef";
	if (!base)
		return (0);
	len = 0;
	print_ptr(p, base, &len);
	return (len + 2);
}
