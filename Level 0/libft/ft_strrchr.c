/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:15:56 by isousa            #+#    #+#             */
/*   Updated: 2021/02/21 11:51:02 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	char		temp;
	int			i;

	str = s;
	i = ft_strlen(s);
	s = (s + i);
	temp = (char)c;
	while (*s != *str && temp != *s)
		s--;
	if (temp == *s)
		return ((char *)s);
	return (0);
}
