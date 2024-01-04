#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
int	ft_putstr(char *s)
{
	int	i;
	int	length;

	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	length = 0;
	i = 0;
	while (s[i])
	{
		length += ft_putchar(s[i]);
		i++;
	}
	return (length);
}
