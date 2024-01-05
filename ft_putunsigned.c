
#include "ft_printf.h"
int	get_length(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
int	ft_putunsigned(unsigned int n)
{
	int		length;
	char	*all;
	int		len;

	if (n < 10)
		return (ft_putchar(n + '0'));
	length = get_length(n);
	len = length;
	all = (char *)malloc(length + 1);
	if (!all)
		return (0);
	length--;
	while (length >= 0)
	{
		all[length] = ((n % 10) + '0');
		n = n / 10;
		length--;
	}
	all[len] = 0;
	ft_putstr(all);
	free(all);
	return (len);
}