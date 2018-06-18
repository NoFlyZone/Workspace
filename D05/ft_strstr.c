#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char *ft_strstr(char *str, char *to_find)
{
    int i;
    char ret;

    ret = to_find;
    i = 0;
    while (str[i] != '\0' && str[i] != ret)
        i++;
    ft_putchar(str[i]);
    return str[i];
}

int main(void)
{
    char *str = "wwwwwwawww";
    char to_find;

    to_find = 'a';
    ft_putchar(ft_strstr(str, &to_find));
    return(0);
}
