int ft_str_is_uppercase(char *str)
{
    int i;
    int result;

    i = 0;

    if (str[0] == '\0')
        return 1;

    while (str[i])
    {
        if ((str[i] >= 'A' && str[i] <= 'Z'))
            result = 1;
        else
            result = 0;

        if (result == 0)
            return result;
        i++;
    }
    return result;
}

#include <stdio.h>
int main(void)
{
    printf("%i\n", ft_str_is_uppercase("Olá1"));
    printf("%i\n", ft_str_is_uppercase("123"));
    printf("%i\n", ft_str_is_uppercase(""));
    printf("%i\n", ft_str_is_uppercase("AAA"));
    printf("%i\n", ft_str_is_uppercase("aaa"));
}