#include <unistd.h>

void ft_putchar(char *c)
{
    write(1, &c, 1);
}

void    ft_rev_int_tab(int *tab, int size)
{
    while (tab[size - 1])
    {
        ft_putchar(&tab[size] + '0');
        size--;
    }
}

int main(void)
{
    int value = 42;
    int *ptr = &value;

    ft_rev_int_tab(ptr, 2);
}