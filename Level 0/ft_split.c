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

static int	strwcnt_s(const char *str, const char *delim)
{
	int	i;
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	i = -1;
	while (str[++i])
	{
		if (!flag && !ft_strchr(delim, str[i]))
			flag = 1;
		else if (flag && ft_strchr(delim, str[i]))
		{
			flag = 0;
			count++;
		}
	}
	return (count + flag);
}

static char	**aux(const char *s, char c, char **strings)
{
	int counter;
	int i;
	int j;
	int x;

	i = 0;
	j = -1;
	counter = 0;
	while (s[i])
	{
		counter = 0;
		while (s[i] != c && s[i] && ++i)
			counter++;
		strings[++j] = (char *)malloc((counter + 1) * sizeof(char));
		strings[j][counter] = '\0';
		x = 0;
		while (counter && ++x)
			strings[j][--counter] = s[i - x];
		if (s[i] == c)
			i++;
	}
	return (strings);
}

char		**ft_split(char const *s, char c)
{
	int		counter;
	int		i;
	char	delm[2];
	char	**strings;

	i = -1;
	delm[0] = c;
	delm[1] = '\0';
	counter = strwcnt_s(s, delm);
	if (!(strings = (char **)malloc((counter + 1) * sizeof(char *))))
		return (NULL);
	strings[counter] = NULL;
	return (aux(s, c, strings));
}
