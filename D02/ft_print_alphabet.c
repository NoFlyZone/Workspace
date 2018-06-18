#include <stdio.h>

void ft_putchar(char c);

void ft_print_alphabet(void);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    int i;
    
    i=97;
    while(i < 123)
    {
        ft_putchar(i);
        i++;
    }
    ft_putchar('\n');
}

int main(void)
{
    ft_print_alphabet();
    return(0);
}
