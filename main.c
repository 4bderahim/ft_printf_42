
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char c[] = "NOne of the above!";
	int s = 0;
	int d = printf("hello %c %d\n",*c, s);
	int t = ft_printf("hello %c %d\n",*c, s);
	printf("\n[%d||%d]", d, t);
	return (0);
}