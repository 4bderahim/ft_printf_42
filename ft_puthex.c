#include "ft_printf.h"

static void	print_hex(unsigned int hex, char *base, int *len)
{
	if (hex < 16)
	{
		*len += 1;
		ft_putchar(base[hex]);
	}
	else
	{
		print_hex(hex / 16, base, len);
		ft_putchar(base[hex % 16]);
		*len += 1;
	}
}
int	ft_puthex(unsigned int hex, int u)
{
	char	*base;
	int		len;

    base = NULL;
	if (u == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len = 0;
	print_hex(hex, base, &len);
	
	return (len);
}
