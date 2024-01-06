/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-krid <ael-krid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:54:27 by ael-krid          #+#    #+#             */
/*   Updated: 2024/01/06 21:54:56 by ael-krid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

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
