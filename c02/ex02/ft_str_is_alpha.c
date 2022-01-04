int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] > 'a' || str[i] < 'z' || str[i] > 'A' || str[i] < 'Z' || str[0] == '\0')
        {
            return 1;
        }
        i++;
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    printf("%i\n", ft_str_is_alpha("Olá"));
    printf("%i\n", ft_str_is_alpha("123"));
    printf("%i\n", ft_str_is_alpha(""));
}