#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n > 10)
    {
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + 48);
    }
    else
        ft_putchar(n + 48);
}

void test(int *ans)
{
    int i;
    
    i = 0;
    while (i < 8)
    {
        *ans = 1 + *ans;
        i++;
    }
}

int main(void)
{
    int ans;

    ans = 0;
    ft_putnbr(ans);
    test(&ans);
    ft_putchar('\n');
    ft_putnbr(ans);
    ft_putchar('\n');
    return(0);
}
