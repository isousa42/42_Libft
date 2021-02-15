
//include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
	char *number;
	char sign;
	int num;
	int counter;

	num = n;
	counter = 1;
	if(n < 0)
		sign = '-';
	while (num > 10)
	{
		num /= 10;
		counter++;
	}
	if (!(number = (char *)malloc((counter + 1) * sizeof(char *))))
		return (NULL);
	number[counter] = '\0';
	counter--;
	while (counter >= 0)
	{
		num = n % 10;
		number[counter] = (char)(num + '0');
		counter--;
	}
	return(number);
}

int main()
{
	int n = 1357;
	printf("%s", ft_itoa(n));
	return 0;
}
