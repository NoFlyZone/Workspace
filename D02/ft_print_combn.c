#include <stdio.h>

void ft_putchar(char c);

void ft_print_combn(int n);

void ft_print(int tab[], int n);

void ft_putchar(char c)
{
    write(1, &c,1);
}

void ft_print(int tab[], int n)
{
    int i;
    int j;
    int canprint;
   
    i = 1;
    canprint = 0;
    while (i < n)
    {
        j = i - 1;
        if(tab[j] >= tab[i])
            canprint = 123;
        i++;
    }
    if(canprint != 123)
    {
        i = 0;
        while(i < n)
        {
            ft_putchar(tab[i] + 48);
            i++;
        }
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_combn(int n)
{
    int tab[n];
    int i;

    i = 0;
    while (i < n)
    {
        tab[i] = 0;
        i++;
    }
    while(tab[0] <= 10 -n)
    {
        ft_print(tab, n);
        i = n - 1;
        tab[i]++;
        while(i > 0)
        {
            if (tab[i] > 9)
            {
                tab[i - 1]++;
                tab[i] = 0;
            }
            i--;
        }   
    }
}

int main(void)
{
    ft_print_combn(1);
    return(0);
}
