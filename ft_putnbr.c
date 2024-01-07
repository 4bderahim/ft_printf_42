/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-krid <ael-krid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:53:21 by ael-krid          #+#    #+#             */
/*   Updated: 2024/01/07 21:38:45 by ael-krid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	putstr(char *s)
{
	int	i;

	i = 0;
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

static int	put_numbers(int num)
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
		ft_putchar(res + '0');
		length++;
		num = num % (po);
		len--;
	}
	return (length);
}

int	ft_putnbr(int n)
{
	int	length;

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
	return (length);
}
