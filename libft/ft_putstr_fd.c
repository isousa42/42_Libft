/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:51:31 by isousa            #+#    #+#             */
/*   Updated: 2021/02/24 17:34:49 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	char *string;

	if (!str || fd < 0)
		return ;
	string = str;
	while (*string != '\0')
	{
		write(fd, string, 1);
		string++;
	}
}
