
// DONE / CONFIRMED WITH MAIN

//#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int i;
    int j;
    int srcsize;

    i = 0;
    srcsize = 0;
    while (src[j] != '\0')
	{
		srcsize++;
		j++;
	}
    j = 0;
    while (dest[i] != '\0')
        i++;
    if(size <= i)
        return (size + srcsize);
    while (src[j] != '\0' && i + 1 < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

	return (size + (srcsize - j));
}

int main()
{
    char src[] = "primeira";
    char dest[] = "segunda";
    int size = 5;
    int i = 0;

    printf("%d\n\n", ft_strlcat(dest, src, size));

    while(dest[i] != '\0')
    {
        printf("%c", dest[i]);
        i++;
    }

    return 0;

}