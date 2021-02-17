/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:05:19 by isousa            #+#    #+#             */
/*   Updated: 2021/02/17 19:07:03 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	while (i < count)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
