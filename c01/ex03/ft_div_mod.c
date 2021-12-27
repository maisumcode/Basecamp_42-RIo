
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

// #include <stdio.h>

// int main(void)
// {
//     int a = 42;
//     int b = 10;

//     int *mod = &a;
//     int *div = &b;
//     printf("Antes div: %i, mod: %i\n", *div, *mod);
//     ft_div_mod(a, b, div, mod);
//     printf("Depois div: %i, mod: %i\n", *div, *mod);
// }