/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:14:07 by isousa            #+#    #+#             */
/*   Updated: 2021/02/21 16:13:01 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"





char		*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	size_t	sign;
	size_t	num;

	sign = (n < 0) ? 1 : 0;
	num = (n < 0) ? (n * -1) : n;
	len = 0;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	len += 1 + sign;
	res = (char *)malloc(len + 1 * sizeof(char));
	if (!res)
		return (0);
	res[len] = '\0';
	while (len-- > sign)
	{
		res[len] = num % 10 + '0';
		num = num / 10;
	}
	if (sign == 1)
		res[len] = '-';
	return (res);
}
