#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

void ft_putnbr(int n)
{
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + 48);
    }
    else
        ft_putchar(n + 48);
}

int main(void)
{
    ft_putnbr(ft_strlen("ciaociaociao"));
    return(0);
}
