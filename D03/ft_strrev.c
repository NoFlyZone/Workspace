#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

char *ft_strrev(char *str)
{
    char swap;
    int i;
    int size;
    
    i = 0;
    size = ft_strlen(str);
    while (i < size)
    {
        swap = str[i];
        str[i] = str[size - 1];
        str[size - 1] = swap;
        i++;
        size--;
    }
    return(str);
}

int main(void)
{
    ft_strrev("ciao");
    return(0);
}
