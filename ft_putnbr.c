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

void	put_numbers(int num)
{
	int	len;
	int	res;
	int	po;

	res = 0;
	len = num_len(num) - 1;
	while (len >= 0)
	{
		po = power(10, len);
		res = num / po;
		ft_putchar(res + '0');
		num = num % (po);
		len--;
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n < 10)
		{
			ft_putchar(n + '0');
		}
		else
			put_numbers(n);
	}
}