
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
    char c[] = "NOne of the above!";
	int x = 9;
    int d = printf("%s %D %%\n", c, x);
    int t = ft_printf("%s %D %%", c, x);
    printf("\n[%d||%d]", t, d);
    return (0);
}