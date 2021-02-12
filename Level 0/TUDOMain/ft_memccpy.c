/*
    DONE / CONFIRMED WITH MAIN
    This function copies no more than n bytes of memory area pointed to by src to memoria area dest.
    It stops when it found the c character.
    The memory area must not overlap.
*/

//#include "libft.h"
#include <stdio.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    if(!dest && !src)
        return (0);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        if ((unsigned char)c == ((unsigned char *)src)[i])
			return (dest + i + 1);
        i++;
    }
    return (0);
    
}

int main()
{
    char str[] = "memset";
    char dest[] = "bzero";
    int c = 116;
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    i = 0;
    while (dest[i] != '\0')
    {
        printf("\n%c", dest[i]);
        i++;
    }
    printf("\n%s", ft_memccpy(dest, str, c, 6));
    i = 0;
    while (dest[i] != '\0')
    {
        printf("\n%c", dest[i]);
        i++;
    }
    return 0;
}