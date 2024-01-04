
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
    char c[] = "NOne of the above!";
	int x = -9;
    int d = printf("%s %d %u  \n", c, x, x);
    int t = ft_printf("%s %d %u ", c, x, x);
    printf("\n[%d||%d]", d, t);
    return (0);
}