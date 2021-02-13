
//#include "libft.h"
#include <stdio.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	char conv;
	char *str = (char *)s;
	int i;

	conv = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == conv)
			return(str + i);
		else
			i++;
	}
	return 0;
}

int main()
{
	char s[] = "haystack";
	int c = 107;
	int n = 8;

	printf("%s\n", s);
	printf("%d\n\n", c);

	printf("%s", ft_memchr(s, c, n));
	return 0;
}
