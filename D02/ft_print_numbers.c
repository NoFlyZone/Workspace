#include <stdio.h>

void ft_putchar(char c);

void ft_print_numbers(void);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    int i;

    i=48;
    while(i < 58)
    {
        ft_putchar(i);
        i++;
    }
    ft_putchar('\n');
}

int main(void)
{
    ft_print_numbers();
    return(0);
}
