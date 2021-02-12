/*
	DONE / CONFIRMED WITH MAIN
    The function ft_toupper is going to change the lowercase caracter to uppercase.
	It is going to receive an int and compare it to the ASCII table. 
	If the int as a value of a lowercase letter, is going to change it to the value of the correpondent uppercase letter.
	It is going to return the int with the uppercase value.
*/

//#include "libft.h"
#include <stdio.h>

int ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
        c -= 32;
	return (c);
}

int main()
{
	int c = 98;
	char swap = (unsigned char) c;

	printf("antes: %c", swap);
	printf("\ndepois: %c", ft_toupper(c));

	return 0;
}