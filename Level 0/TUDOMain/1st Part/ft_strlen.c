/*
	DONE / CONFIRMED WITH MAIN
    The function isprint is going to count the lenght of a given string.
    The argument is a char *string and will return the number of characters on it.
*/

//#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	counter;
    int i;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

