#include <unistd.h>

void ft_print_combn(int n)
{
    int left_number;
    int right_number;

    while (n < 10)
    {
        left_number = '0';
        while(left_number <= '8')
        {
            right_number = left_number + 1;
            while(right_number <= '9')
            {
                write(1, &left_number, 1);
                write(1, &right_number, 1);
                write(1, ", ", 2);
                right_number++;
            }
            left_number++;
        }
        n++;
    }
}

int main(void)
{
   ft_print_combn(2);
}