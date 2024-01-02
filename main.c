
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void     ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
void ft_putstr_fd(char *s, int c)
{
    int i = 0;
    while (s[i])
        {
           ft_putchar_fd(s[i], c);
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

void	put_numbers(int num, int fd)
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
		ft_putchar_fd(res + '0', fd);
		num = num % (po);
		len--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n < 10)
		{
			ft_putchar_fd(n + '0', fd);
		}
		else
			put_numbers(n, fd);
	}
}

void hello(char *p, ...)
{
    int i = 0;
    va_list lst;
    va_start(lst, p);
    while (p[i])
    {
        //ft_putchar_fd(p[i], 1);
            
        if (p[i] == '%')
        {
                ft_putstr_fd(va_arg(lst, char*), 1);
                i++;
        }
        
        else
        {
            ft_putchar_fd(p[i], 1);
        }
        i++;
    }
   
}
int main()
{
    char c[] = "NOne of the above!";
    hello("hello%s]", c);
    return (0);
}