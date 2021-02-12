/*
    DONE / CONFIRMED WITH MAIN
    The function islpha is going to check if a character is alphabetic or not.
    Is going to check if islower and isupper are true. 
    The argument is an int, so it has to be compared to the respective number in ASCII Table.
    If it is alphabetic, program will return non-zero (1).
    If it is not alphabetic, program will return zero (0).
*/

//#include "libft.h"
#include <stdio.h>

int ft_isalpha(int c)
{
    if(c >= 65 && c <= 90 || c >= 97 && c <= 122)
        return (1);
    else
        return (0);
}

int main()
{
    int c = 130;

    if(ft_isalpha(c))
        printf("\nIS ALPHA\n");
    else
        printf("IS NOT ALPHA");

    return 0;
    
}