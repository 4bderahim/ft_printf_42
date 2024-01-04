
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char c[] = "NOne of the above!";

	int d = printf(" %p \n", 16);
	int t = ft_printf(" %p ", 16);
	printf("\n[%d||%d]", d, t);
	return (0);
}