char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// #include <stdio.h>
// int main(void)
// {
//     char src[] = "Basecamp";
//     char dest[] = "Basecamper";
//     char *ptr_src = src;
//     char *ptr_dest = dest;
//     printf("Antes %s\n", ptr_dest);
//     ft_strncpy(ptr_dest, ptr_src, 8);
//     printf("Depois %s\n", ptr_dest);
// }