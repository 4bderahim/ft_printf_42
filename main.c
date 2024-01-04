
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
    char c[] = "NOne of the above!";
	int x = -223;
    printf("%u\n", x);
    int d = printf("%d %x", x, x);
    int t = ft_printf("%d %x", x, x);
    printf("\n[%d||%d]", d, t);
    return (0);
}