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
        i++;
    }
}

// #include <stdio.h>
// void print_array(int *arr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%i, ", arr[i]);
//     }
// }

// int main(void)
// {
//     int value[] = { 4, 2, 3, 5 };
//     int *ptr = value;
//     print_array(value);
//     ft_rev_int_tab(ptr, 4);
//     print_array(value);
// }