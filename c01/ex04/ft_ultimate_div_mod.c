void    ft_ultimate_div_mod(int *a, int*b)
{
    int keep_a_value = *a;
    *a = keep_a_value / *b;
    *b = keep_a_value % *b;
}

// #include <stdio.h>
// int main(void)
// {
//     int a_value = 42;
//     int b_value = 10;

//     int *a_ptr = &a_value;
//     int *b_ptr = &b_value;
//     printf("Antes a: %i b: %i\n", *a_ptr, *b_ptr);
//     ft_ultimate_div_mod(a_ptr, b_ptr);
//     printf("Depois a: %i b: %i\n", *a_ptr, *b_ptr);
// }