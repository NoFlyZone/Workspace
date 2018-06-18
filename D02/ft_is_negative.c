#include <stdio.h>

void ft_putchar(char c);

void ft_is_negative(int n);

void ft_putchar(char c)
{
    write(1, &c,1);
}

void ft_is_negative(int n)
{
    int i;

    i=0;
    if(n < i)
        ft_putchar('N');
    else
        ft_putchar('P');
}

int main(void)
{
    ft_is_negative(10);
    return(0);
}
