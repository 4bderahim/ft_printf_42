
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
    char c[] = "NOne of the above!";
	int x = 9;
    int t = ft_printf("%d%D %%", x, x);
    printf("[%d]", t);
    return (0);
}