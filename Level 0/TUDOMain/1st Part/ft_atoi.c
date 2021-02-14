// DONE / CONFIRMED WITH MAIN

//#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	while ((*str == 45) || (*str == 43))
	{
		if (*str == 45)
			sign = sign * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10;
		num = num + (int)(*str - '0');
		str++;
	}
	return (num * sign);1
}

int main()
{
	char str[] = " ---+--+1234ab567";

	printf("%d", ft_atoi(str));

	return 0;
}
