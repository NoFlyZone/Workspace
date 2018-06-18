#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
    int c;
    int d;
    int e;

    d = *a;
    e = *b;
    ft_putchar(d + 48);
    ft_putchar(e + 48);
    c = *a;
    *a = *b;
    *b = c;
    d = *a;
    e = *b;
    ft_putchar(d + 48);
    ft_putchar(e + 48);
}

int main(void)
{
    int c;
    int d;
    int *a;
    int *b;

    c = 1;
    d = 2;
    *a = c;
    *b = d;
    ft_swap(a, b);
    return(0);
}
