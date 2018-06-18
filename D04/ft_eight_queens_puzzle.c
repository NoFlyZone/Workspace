#include <unistd.h>

void ft_putchar(char c);

void ft_putnbr(int n)
{
    if (n > 10)
    {
        ft_putnbr(n / 10);
        ft_putchar(48 + n % 10);
    }
    else
        ft_putchar(n + 48);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_board(int *board, int col)
{
    while (col < 8)
    {
        ft_putchar(49 + board[col]);
        col++;
    }
    ft_putchar('\n');
}

int ft_check(int *board, int col)
{
    int i;

    i = 0;
    while (i < col)
    {
        if (board[i] == board[col] || col - i == board[col] - board[i])
            return(0);
        if (col - i == board[i] - board[col])
            return(0);
        i++;
    }
    return(1);
}

void ft_position(int *board, int col, int *ans)
{
    int line;
    int check;

    line = 0;
    if (col == 8)
    {
        ft_print_board(board, 0);
    }
    while (line < 8)
    {

        board[col] = line;
        if(ft_check(board, col) != 0)
        {
            ft_position(board, col + 1, ans);
        }
        line++;
    }
}

int ft_eight_queens_puzzle(void)
{
    int board[8];
    int ans;
    int col;

    ans = 0;
    col = 0;
    ft_position(board, 0, &ans);
    ft_putnbr(ans);
    return(ans);
}

int main(void)
{
    ft_eight_queens_puzzle();
    return(0);
}
