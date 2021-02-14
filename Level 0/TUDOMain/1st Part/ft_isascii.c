/*
    DONE / CONFIRMED WITH MAIN
    The function isascii is going to check if it is a ASCII table character.
    To be a ASCII table caracter it must be between 0 and 127 (0177 Octal).
    The argument is an int, so it has to be compared to the respective number in ASCII Table.
    If it is ASCII table caracter, program will return non-zero (1).
    If it is not, program will return zero (0).
*/

//#include "libft.h"
#include <stdio.h>

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

int main()
{
    int c = 5;

    if(ft_isascii(c))
        printf("\nIS ASCII\n");
    else
        printf("IS NOT ASCII");

    return 0;
}