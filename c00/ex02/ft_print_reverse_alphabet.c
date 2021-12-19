#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int letter;

    letter = 'z';
    while (letter >= 'z')
    {
        write(1, &letter, 1);
        letter--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
}