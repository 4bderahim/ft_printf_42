
#include "ft_printf.h"
#include <stdio.h>
int ft_putunsigned(unsigned int n, int count)
{
    

    
    if (n <= 9)
    {
        count++;
        ft_putchar(n + '0');
        //count++;
    }
    else 
    {
        ft_putunsigned(n / 10, count);
        count++;

        ft_putchar((n % 10) + '0');
        
    }
    return (count + 1);
    
}

int main()
{
    int t = ft_putunsigned(23455, 0);
    printf("\n%u        [%d]", 23455, t);
}