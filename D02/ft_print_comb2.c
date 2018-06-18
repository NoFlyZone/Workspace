#include <stdio.h>

void ft_putchar(char c);

void ft_print_comb2(void);

void ft_putnbr(int nb);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    int a;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
        ft_putnbr(nb);
    }
    else if(nb > 9)
    {
        a = nb % 10;
        nb = nb / 10;
        ft_putnbr(nb);
        ft_putchar(48 + a);
    }
    else
    {
        ft_putchar(48 + nb);
    }
}

void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            if(a < 10)
                ft_putchar('0');
            ft_putnbr(a);
            ft_putchar(' ');
            if (b < 10)
                ft_putchar('0');
            ft_putnbr(b);
            if (a != 98)
                ft_putchar(',');
            if (a != 98)
                ft_putchar(' ');
            b++;
        }
        a++;
    }
    ft_putchar('\n');
}

int main(void)
{
    ft_print_comb2();
    return(0);
}
