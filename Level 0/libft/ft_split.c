/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:52:11 by isousa            #+#    #+#             */
/*   Updated: 2021/02/21 16:21:07 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcounter(const char *str, char c)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i] != '\0')
			i++;
		while (str[i] == c && str[i] != '\0')
			i++;
		counter++;
	}
	return (counter);
}

static int	stringlen(const char *str, char c)
{
	int len;

	len = 0;
	while (*str != c)
	{
		str++;
		len++;
	}
	return (len);
}

static char	**strcpy(char **new, const char *s, char c) 
{
	int	i;
	int	j;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		while (*s == '\0')
			continue;
		new[i] = (char **)malloc(sizeof(char*) * stringlen(s, c) + 1);
		if (!new[i])
			return (0);
		j = 0;
		while (*s != c && *s != '\0')
		{
			new[i][j] = *s;
			j++;
			s++;
		}
		new[i][j] = '\0';
		i++;
	}
	new[i] = 0;
	return (new);

}

char		**ft_split(char const *s, char c)
{
	char **new;

	new = (char **)malloc(sizeof(char *) * (strcounter(s, c) + 1));
	if (!s || !new)
		return (0);
	new = strcpy(new, s, c);
	return (new);
}
