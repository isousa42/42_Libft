/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:50:17 by isousa            #+#    #+#             */
/*   Updated: 2021/02/17 17:50:41 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_checkextreme(const char *s)
{
	int compos;
	int comneg;

	compos = ft_strncmp(*s, "2147483647", ft(strlen(s) + 1));
	comneg = ft_strncmp(*s, "-2147483648", ft(strlen(s) + 1));
	if (compos == 0)
		return (0);
	if (comneg == 1)
		return (1);
	else
		return (-1)

}

int	ft_atoi(const char *str)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (ft_checkextreme(str))
		return (2147483647);
	else if (ft_checkextreme(str) == 1)
		return (-2147483648);
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
