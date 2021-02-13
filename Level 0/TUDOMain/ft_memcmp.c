
//#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;
	if (n == 0)
		return (0);

	while (n > 0 && *str1 && *str2)
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		n--;
	}

	return (*str1 - *str2);
}

int main()
{
	char s1[] = "memset";
	char s2[] = "bzero";

	printf("%d", ft_memcmp(s1, s2, 7));

	return 0;
}
