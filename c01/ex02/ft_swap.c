void    ft_swap(int *a, int *b)
{
    int keep_value;

    keep_value = *a;
    *a = *b;
    *b = keep_value;
}

#include <stdio.h>

int main(void)
{
    int a_value = 10;
    int b_value = 5;
    int *a = &a_value;
    int *b = &b_value;
    printf("antes: %i %i\n", a_value, b_value);
    ft_swap(a, b);
    printf("depois: %i %i\n", a_value, b_value);
}