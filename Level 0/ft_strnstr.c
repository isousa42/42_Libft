/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:14:01 by isousa            #+#    #+#             */
/*   Updated: 2021/02/17 20:15:05 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i - j);
			else
			{
				i++;
				j++;
			}
		}
		i++;
	}
	return (0);
}
