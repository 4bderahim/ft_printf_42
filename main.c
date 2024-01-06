
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char c[] = "NOne of the above!";
	int s = 0;
	int d = printf(" %.3d ", 11);
	int t = ft_printf(" %.3d ", 11);
	printf("\n[%d||%d]", d, t);
	return (0);
}