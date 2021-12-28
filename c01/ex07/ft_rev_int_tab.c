#include <unistd.h>

void    ft_putchar(char *c)
{
    write(1, &c, 1);
}

void    ft_rev_int_tab(int *tab, int size)
{
    int hold_values; 
    int i;
    i = 0;
    
    while(i < (size / 2)) 
    {
        hold_values = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = hold_values;
        ft_putchar(tab[size - 1 - i] + '0');
        i++;
    }
}

int main(void)
{
    int value[2] = { 4, 2 };
    int *ptr = &value;

    ft_rev_int_tab(ptr, 2);
}