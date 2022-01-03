void    ft_sort_int_tab(int *tab,int size)
{
    int hold_values;
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            hold_values = tab[j];
            if (tab[j] > tab[j + 1])
            {
                tab[j] = tab[j + 1];
                tab[j + 1] = hold_values;
            }
            j++;
        }
        i++;
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