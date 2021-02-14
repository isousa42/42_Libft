
//include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    int i;
    int j;

    new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
    i = 0;
    j = 0;
    if(!s1 || !s2 || !new)
        return 0;
    while(s1[i] != '\0')
    {
        new[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        new[i] = s2[j];
        j++;
        i++;
    }
    new[i] = '\0';
    return (new);
}

int main()
{
    char s1[] = "Amelia ";
    char s2[] = "Rodrigues";

    printf("%s", ft_strjoin(s1, s2));
    return 0;
}