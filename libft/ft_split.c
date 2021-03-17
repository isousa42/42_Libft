/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:52:11 by isousa            #+#    #+#             */
/*   Updated: 2021/02/24 17:36:45 by isousa           ###   ########.fr       */
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

char		**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		j;
	int		start;

	new = malloc(sizeof(char *) * (strcounter(s, c) + 1));
	if (!s || !new)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		new[j] = ft_substr(s, start, i - start);
		j++;
	}
	new[j] = NULL;
	return (new);
}
