/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:45:17 by isousa            #+#    #+#             */
/*   Updated: 2021/02/20 17:33:40 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	void *ret;

	if (!dest && !src)
		return (0);
	ret = dest;
	if (src < dest)
	{
		src += len;
		dest += len;
		while (len--)
			*(char *)--dest = *(char *)--src;
	}
	else
		while (len--)
			*(char *)dest++ = *(char *)src++;
	return (ret);
}
