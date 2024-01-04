
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
    char c[] = "NOne of the above!";
	int x = 1;
    int d = printf("%s %d %u\n", NULL, x, x);
    int t = ft_printf("%s %d %u ", NULL, x, x);
    printf("\n[%d||%d]", d, t);
    return (0);
}