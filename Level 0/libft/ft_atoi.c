/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:50:17 by isousa            #+#    #+#             */
/*   Updated: 2021/02/21 12:17:19 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (num * sign);
}
