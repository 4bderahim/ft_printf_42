
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char c[] = "NOne of the above!";
	int s = 12425;
	int d = printf(" %u ", s);
	int t = ft_printf(" %u ", s);
	 printf("\n[%d||%d]", d, t);
	return (0);
}