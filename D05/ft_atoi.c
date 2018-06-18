#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putnbr(-2);
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * -1);
    }
    else if (nb < 9)
        ft_putchar(48 + nb);
    else
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + 48);
    }
}

int ft_atoi(char *str)
{
    int i;
    int neg;
    int nb;

    neg = 0;
    i = 0;
    nb = 0;
    while (str[i] < 32)
        i++;
    if (str[i - 1] == '-')
        neg--;
    while (str[i] < 58 && str[i] > 48)
    {
        nb = nb * 10;
        nb = nb + (str[i] - 48);
        i++;
    }
    if (neg != 0)
        nb = nb * -1;
    ft_putnbr(nb);
    return(nb);
}

int main(void)
{
    ft_putnbr(-2356);
    ft_putchar('\n');
    ft_atoi("2356");
    ft_putchar('\n');
    ft_putnbr(ft_atoi("2356"));
    return(0);
}
