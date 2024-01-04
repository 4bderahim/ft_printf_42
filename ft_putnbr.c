
#include "ft_printf.h"

static void	ft_putchr(char c)
{
	write(1, &c, 1);
}
static void	putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchr(s[i]);
		i++;
	}
}
static int	num_len(int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

static int	power(int base, int exp)
{
	int	res;

	res = 1;
	while (exp)
	{
		res = res * base;
		exp--;
	}
	return (res);
}

int	put_numbers(int num)
{
	int	len;
	int	res;
	int	po;
	int	length;

	length = 0;
	res = 0;
	len = num_len(num) - 1;
	while (len >= 0)
	{
		po = power(10, len);
		res = num / po;
		ft_putchr(res + '0');
		length++;
		num = num % (po);
		len--;
	}
	return (length);
}

int	ft_putnbr(int n)
{
	int length;

	length = 0;
	if (n == -2147483648)
	{
		putstr("-2147483648");
		return (11);
	}
	else
	{
		if (n < 0)
		{
			ft_putchr('-');
			n *= -1;
			length++;
		}
		if (n < 10)
		{
			ft_putchr(n + '0');
			length++;
		}
		else
			length += put_numbers(n);
	}
	return (length);
}