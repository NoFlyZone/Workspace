#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_sort_integer_table(int *tab, int size)
{
    int i;
    int swap;

    i = 0;
    while (i < size)
    {
        if(tab[i] > tab[i + 1])
        {
            swap = tab[i];
            while(i < size)
            {
                tab[i] = tab[i + 1];
                i++;
            }
            tab[i] = swap;
            i = 0;
        }
        else
            i++;
    }
    i = 0;
    while(i < size)
    {
        ft_putchar(48 + tab[i]);
        i++;
    }
}

int main(void)
{
    int tab[5] ={4, 1, 5, 3, 2};
    ft_sort_integer_table(tab, 5);
    return(0);
}

