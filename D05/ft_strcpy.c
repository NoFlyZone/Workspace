#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = -1;
    while (str[++i] != '\0')
    ft_putchar(str[i]);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    
    i = -1;
    while (src[++i] != '\0' && i != n)
        dest[i] = src[i];
    i--;
    while (dest[++i] != '\0')
        dest[i] = '\0';
    return(dest);
}

int main(void)
{
    char src[] = "ciaociao";
    char dest[] = "000000000";

    ft_putstr(ft_strncpy(dest, src, 0));
    ft_putchar('\n');
    return(0);
}
