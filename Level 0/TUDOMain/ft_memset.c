/*
    DONE / CONFIRMED WITH MAIN
    This function fills the first n bytes of memory area pointed to by str with the constant byte c.
    Example of main in: https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
*/

//#include "libft.h"
#include <stdio.h>

void    *ft_memset(void *str, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)str)[i] = c;
        i++;
    }  

    return (str);
}

int main()
{
    char str[] = "memset";
    int i = 0;
    int c = 65;

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    ft_memset(str, c, 2);
    i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}