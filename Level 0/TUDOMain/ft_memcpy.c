/*
    DONE / CONFIRMED WITH MAIN
    This function copies n bytes of memory area pointed to by src to memoria area dest.
    The memory area must not overlap.
*/

//#include "libft.h"
#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;

    i = 0;
    if(!dest && !src)
        return (0);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}

int main()
{
    char str[] = "memset";
    char dest[] = "bzero";
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    i = 0;
    while (dest[i] != '\0')
    {
        printf("%c\n", dest[i]);
        i++;
    }
    ft_memcpy(dest, str, 2);
    i = 0;
    while (dest[i] != '\0')
    {
        printf("%c\n", dest[i]);
        i++;
    }
    return 0;
}
