
//include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
	char *number;
	int sign;
	int num;
	int counter;

	sign = 0;
	counter = 1;
	if(n < 0)
	{
		sign = 1;
		n = n * -1;
		counter++;
	}
	num = n;
	printf("%d\n", counter);
	while (num > 10)
	{
		num /= 10;
		counter++;
	}
	printf("%d\n", counter);
	if (!(number = (char *)malloc((counter + 1 + sign) * sizeof(char *))))
		return (NULL);
	printf("%d\n", counter);
	if (sign == 1)
		number[0] = '-';
	number[counter] = '\0';
	counter--;
	printf("%d\n", counter);
	if (sign == 1)
	{
		while (counter > 0)
		{
			num = n % 10;
			n = n / 10;
			number[counter] = (char)(num + '0');
			counter--;
		}
	}
	else
	{
		while (counter >= 0)
		{
			num = n % 10;
			n = n / 10;
			number[counter] = (char)(num + '0');
			counter--;
		}

	}
	return(number);
}

int main()
{
	int n = 123;
	printf("%s", ft_itoa(n));
	return 0;
}
