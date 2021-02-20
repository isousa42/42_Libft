/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:14:07 by isousa            #+#    #+#             */
/*   Updated: 2021/02/20 14:38:44 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigit(int num, int counter)
{
	while (num > 10)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

static char	*ft_createstring(char *number, int sign, int counter, int n)
{
	int		num;

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
	return (number);
}

char		*ft_itoa(int n)
{
	char	*number;
	int		sign;
	int		num;
	int		counter;

	sign = 0;
	counter = 1;
	if (n < 0)
	{
		sign = 1;
		n = n * -1;
		counter++;
	}
	num = n;
	counter = ft_countdigit(num, counter);
	if (!(number = (char *)malloc((counter + 1 + sign) * sizeof(char *))))
		return (NULL);
	if (sign == 1)
		number[0] = '-';
	number[counter] = '\0';
	counter--;
	number = ft_createstring(number, sign, counter, n);
	return (number);
}
