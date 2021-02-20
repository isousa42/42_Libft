/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:06:06 by isousa            #+#    #+#             */
/*   Updated: 2021/02/20 14:33:49 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srcsize;

	i = 0;
	j = 0;
	srcsize = 0;
	while (src[j] != '\0')
	{
		srcsize++;
		j++;
	}
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (size <= i)
		return (size + srcsize);
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (size + (srcsize - j));
}
