//#include "libft.h"
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    int i;

    if(!dest || !src)
        return (0);
	if (dest > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

int main ()
{
   char dest[] = "oldstring123";
   char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 11);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
