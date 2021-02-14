/*
    DONE / CONFIRMED WITH MAIN
    The function isdigit is going to check if a character is a decimal digit or not. 
    The argument is an int, so it has to be compared to the respective number in ASCII Table.
    If it is a decimal digit, program will return non-zero (1).
    If it is not a decimal digit, program will return zero (0).
*/

//#include "libft.h"
#include <stdio.h>

int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

int main()
{
    int c = 58;

    if(ft_isdigit(c))
        printf("\nIS DIGIT\n");
    else
        printf("IS NOT DIGIT");

    return 0;
    
}