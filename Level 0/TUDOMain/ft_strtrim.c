
//include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    char *trimed;
    int i;
    int first;
    int lstr;
    int lset;

    first = 0;
    i = 0;
    lstr = ft_strlen(s1);
    lset = ft_strlen(set);
    if(!s1)
        return 0;
    while(s1[first] == set[first])
        first++;
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

int main()
{
    char s1[] = "!=!Amelia!=!";
    char set[] = "=!";

    printf("%s", ft_strtrim(s1, set));
    return 0;
}