char    *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = "\0";
    return dest;
}

// #include <stdio.h>
// int main(void)
// {
//     char src[] = "Basecamp";
//     char dest[] = "";
//     char *ptr_src = src;
//     char *ptr_dest = dest;
//     printf("Antes %s\n", ptr_dest);
//     ft_strcpy(ptr_dest, ptr_src);
//     printf("Depois %s\n", ptr_dest);
// }