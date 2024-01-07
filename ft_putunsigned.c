/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-krid <ael-krid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:55:04 by ael-krid          #+#    #+#             */
/*   Updated: 2024/01/06 21:55:23 by ael-krid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print(unsigned int n, int *length)
{
	if (n < 10)
	{
		*length += ft_putchar(n + '0');
	}
	else
	{
		print(n / 10, length);
		ft_putchar(n % 10 + '0');
		*length += 1;
	}
}

int	ft_putunsigned(unsigned int n)
{
	int	len;

	len = 0;
	print(n, &len);
	return (len);
}
