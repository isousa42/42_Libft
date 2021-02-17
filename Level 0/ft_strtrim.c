/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa <isousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:17:07 by isousa            #+#    #+#             */
/*   Updated: 2021/02/17 20:36:25 by isousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int getfirst(char *s1, char *set)
{
    int first;

    first = 0;
    while(s1[first] == set[first])
        first++;
    return (first);
}

static int getlast(char *s1, char *set)
{
    int lstr;
    int lset;

    lstr = ft_strlen(s1);
    lset = ft_strlen(set);
    while(s1[lstr] == set[lset])
    {
        lstr--;
        lset--;
    }
    return (lstr);

}
char    *ft_strtrim(char const *s1, char const *set)
{
    char *trimed;
    int i;
    int first;
    int lstr;
    int lset;

    first = 0;
    i = 0;

    if(!s1)
        return 0;
    first = getfirst(s1, set);
    while(s1[lstr] == set[lset])
    {
        lstr--;
        lset--;
    }
    trimed = malloc(lstr - first * sizeof(char));
    if (!trimed)
        return 0;
    while(first <= lstr)
    {
        trimed[i] = s1[first];
        i++;
        first++;
    }
    trimed[i] = '\0';
    return(trimed);
}



