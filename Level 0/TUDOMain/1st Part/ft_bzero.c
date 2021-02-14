/*
    DONE / CONFIRMED WITH MAIN
    The b_zero fuction erases the data in the n bytes of the memory starting at the location
    pointed by str, by writting zeros ('\0') to that area.
*/

//#include "libft.h"
#include <stdio.h>

void    ft_bzero(void *str, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)str)[i] = '\0';
        i++;
    }
}

int main()
{
    char str[] = "memset";
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    ft_bzero(str, 5);
    i = 0;
    while (i != 8)
    {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}