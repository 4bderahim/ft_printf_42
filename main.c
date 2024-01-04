
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
    char c[] = "NOne of the above!";
	int x = 23;
    printf("%u\n", x);
    int d = printf("%p\n", c);
    int t = ft_printf("%p", c);
    printf("\n[%d||%d]", d, t);
    return (0);
}