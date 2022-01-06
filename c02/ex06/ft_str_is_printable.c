int ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
    printf("%i\n", ft_str_is_printable("ä1"));
    printf("%i\n", ft_str_is_printable("{123}"));
    printf("%i\n", ft_str_is_printable(""));
    printf("%i\n", ft_str_is_printable("AAA"));
    printf("%i\n", ft_str_is_printable("aaa"));
}