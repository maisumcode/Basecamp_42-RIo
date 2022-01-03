void    ft_sort_int_tab(int *tab, int size)
{
    int hold_values;
    int bubble_sort;
    int i;

    bubble_sort = 0;
    while (bubble_sort < size)
    {
        i = 0;
        while (i < size - 1)
        {
            hold_values = tab[i];
            if (tab[i] > tab[i + 1])
            {
                tab[i] = tab[i + 1];
                tab[i + 1] = hold_values;
            }
            i++;
        }
        bubble_sort++;
    }
}

// #include <stdio.h>
// void print_array(char *msg, int *arr)
// {
//     printf("%s", msg);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%i, ", arr[i]);
//     }
// }

// int main(void)
// {
//     int value[] = { 4, 2, 3, 5, 1 };
//     int *ptr = value;
//     print_array("Antes: ", value);
//     ft_sort_int_tab(ptr, 5);
//     print_array("Depois: ", value);
// }