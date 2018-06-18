#include <stdio.h>

void ft_putchar(char c);

void ft_print_comb(void);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a=0;
    while(a <= 7)
    {
        b= a+1;
        while(b <= 8)
        {
            c= b+1;
            while (c <= 9)
            {
                ft_putchar(48+a);
                ft_putchar(48+b);
                ft_putchar(48+c);
                if (a != 7)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
int main(void)
{
    ft_print_comb();
    return(0);
}
