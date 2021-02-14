
//include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    int i;

    sub = malloc(len + 1 * sizeof(char));
    if(!s || !sub)
        return 0;
    
    while (i < len)
    {
        sub[i] = s[start];
        i++;
        start++;
    }
    sub[i] = '\0';

    return (sub);
}

int main()
{
    char s[] = "abcdefghi";
    int start = 1;
    int len = 5;

    printf("%s\n\n", s);
    printf("%s", ft_substr(s, start, len));
    return 0;
}
