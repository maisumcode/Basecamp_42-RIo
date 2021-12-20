#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int left_number;
    int right_number;

    left_number = 0;
    while(left_number <= 98)
    {
        right_number = left_number + 1;
        while( right_number <= 99)
        {
        ft_putchar(left_number / 10 + '0');
        ft_putchar(left_number % 10 + '0');
        write(1, " ", 1);
        ft_putchar(right_number / 10 + '0');
        ft_putchar(right_number % 10 + '0');
        write(1, ", ", 2);
        right_number++;
        }
        left_number++;
    }

}

int main(void)
{
    ft_print_comb2();
}