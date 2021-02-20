/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:53:27 by isousa            #+#    #+#             */
/*   Updated: 2021/02/17 19:55:01 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	conv;
	char	*str;
	int		i;

	str = (char *)s;
	conv = (unsigned char)c;
	i = 0;
	if (conv == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == conv)
			return (str + i);
		else
			i++;
	}
	return (0);
}
