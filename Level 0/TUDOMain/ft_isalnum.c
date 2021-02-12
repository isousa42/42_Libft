/*
    DONE  / CONFIRMED WITH MAIN
    The function isalnum is going to check if a character is alphabetic or a decimal digit.
    Is going to check if isalpha and isdigit are true. 
    The argument is an int, so it has to be compared to the respective number in ASCII Table.
    If it is alphabetic or decimal digit, program will return non-zero (1).
    If it is not alphabetic or decimal digit, program will return zero (0).
*/

//#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
    if(c >= 65 && c <= 90 || c >= 97 && c <= 122 || c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

int main()
{
    int c = 66;

    if(ft_isalnum(c))
        printf("\nIS ALNUM\n");
    else
        printf("IS NOT ALNUM");

    return 0;
}
    
