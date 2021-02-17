/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:38:52 by isousa            #+#    #+#             */
/*   Updated: 2021/02/17 19:41:49 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (n > 0 && *str1 && *str2)
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
