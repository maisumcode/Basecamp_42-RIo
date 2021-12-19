#include <unistd.h>

void ft_print_comb(void)
{
    int first_number;
    int second_number;
    int third_number;

    first_number = '0';
    while (first_number <= '7')
    {
        second_number = first_number + 1;
        while(second_number <= '8')
        {
            third_number = second_number + 1;
            while(third_number <= '9')
            {
                write(1, &first_number, 1);
                write(1, &second_number, 1);
                write(1, &third_number, 1);
                third_number++;
                write(1, ", ", 2);
            }
            second_number++;
        }
        first_number++;
    }
}

int main(void)
{
    ft_print_comb();
}