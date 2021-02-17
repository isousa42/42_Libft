/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:15:56 by isousa            #+#    #+#             */
/*   Updated: 2021/02/17 20:16:43 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	conv;
	char	*str;
	int		temp;
	int		i;

	conv = (unsigned char)c;
	str = (char *)s;
	i = 0;
	temp = 0;
	if (conv == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == conv)
		{
			temp = i;
			i++;
		}
		else
			i++;
	}
	if (temp == 0)
		return (0);
	else
		return (str + temp);
}
