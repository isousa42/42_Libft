/*
    DONE / CONFIRM WITH MAIN
    The function isprint is going to check if it is a printable character.
    To be a printable caracter it must be between 32 and 126.
    The argument is an int, so it has to be compared to the respective number in ASCII Table.
    If it is printable caracter, program will return non-zero (1).
    If it is not, program will return zero (0).
*/

//#include "libft.h"
#include <stdio.h>

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

int main()
{
    int c = 50;

    if(ft_isprint(c))
        printf("\nIS PRINT\n");
    else
        printf("IS NOT PRINT");

    return 0;
}