
#include "ft_printf.h"
void     ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        {
           ft_putchar(s[i]);
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
	int length;

	length = 0;
	res = 0;
	len = num_len(num) - 1;
	while (len >= 0)
	{
		po = power(10, len);
		res = num / po;
		ft_putchar(res + '0');
		length++;
		num = num % (po);
		len--;
	}
	return (length);
}

int ft_putnbr(int n)
{
	int length;

	length = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
			length++;
		}
		if (n < 10)
		{
			ft_putchar(n + '0');
			length++;
		}
		else
			length += put_numbers(n);
	}
    printf("\n\t\t [%d]", length);
	return (length);
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
        ft_putchar(s[i]);
        if (s[i] == '%' && s[i] == 'd')
			length_to_return += ft_putnbr(va_arg(args, int));
		if (s[i] == '%' && s[i] == 's')
			length_to_return += ft_putnbr(va_arg(args, int));
		else
			i++;
        i++;
    }
    va_end(args);
    return (length_to_return);
}

int main()
{
    char c[] = "NOne of the above!";
	int x = 9;
    int t = ft_printf("%d%D", x, x);
    printf("[%d]", t);
    return (0);
}

