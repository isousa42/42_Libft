
// DONE / CONFIRMED WITH MAIN

//#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int i;
    int srcsize;

	i = 0;
    srcsize = 0;
    while (src[i] != '\0')
	{
		srcsize++;
		i++;
	}
    if (!dest || !src)
        return 0;
	
    i = 0;
	if (n != 0)
    {
        while (src[i] != '\0' && i < (n - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
	return (srcsize);
}

int main()
{
    char src[] = "memset";
    char dest[] = "bzero";
    int n = 7;
    int i = 0;

    printf("%d\n", ft_strlcpy(dest, src, n));
    
    while(dest[i] != '\0')
    {
        printf("%c", dest[i]);
        i++;
    }

    return 0;    
}