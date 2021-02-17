/*
	DONE / CONFIRMED WITH MAIN
    The function ft_tolower is going to change the uppercase caracter to lowercase.
	It is going to receive an int and compare it to the ASCII table. 
	If the int as a value of an Uppercase letter, is going to change it to the value of the correpondent lowercase letter.
	It is going to return the int with the lowercase value.
*/

//#include "libft.h"
#include <stdio.h>

int ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
        c += 32;
	return (c);
}

int main()
{
	int c = 67;
	char swap = (unsigned char) c;

	printf("antes: %c", swap);
	printf("\ndepois: %c", ft_tolower(c));

	return 0;
}