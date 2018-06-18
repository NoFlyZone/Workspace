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
    else if (nb < 10)
        ft_putchar(48 + nb);
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + 48);
    }
}

int main(void)
{
    ft_putnbr(20000000000000);
    return(0);
}
