/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:52:11 by isousa            #+#    #+#             */
/*   Updated: 2021/02/17 19:53:02 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcounter(const char *str, char c)
{
	int	counter;
	int	flag;

	flag = 0;
	counter = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			counter++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (counter);
}

static char	*strcpy(const char *s, int start, int finish)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(finish - start * sizeof(char));
	if (!new)
		return (0);
	while (start < finish)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**strings;

	strings = (char **)malloc((strcounter(s, c) + 1) * sizeof(char *)));
	if (!s || !strings)
		return (0);
	i = -1;
	j = 0;
	k = 0;
	while (k < ft_strlen(s))
	{
		if (s[k] != c && i < 0)
			i = k;
		else if ((s[k] != c || k == ft_strlen(s)) && i >= 0)
		{
			strings[j++] = strcpy(s, i, k);
			i = -1;
		}
		k++;
	}
	strings[j] = '\0';
	return (strings)
}
