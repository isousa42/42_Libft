
// DONE / CONFIRMED WITH MAIN

//#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);

	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

int main()
{
	char s1[] = "memset";
	char s2[] = "bzero";

	printf("%d", ft_strncmp(s1, s2, 7));

	return 0;
}