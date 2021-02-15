//#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char conv;
	char *str = (char *)s;
	int i;

	conv = (unsigned char) c;
	i = 0;
	if (conv == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if(str[i] == conv)
			return(str + i);
		else
			i++;
	}
	return 0;
}

// int main()
// {
// 	char s[] = "haystack";
// 	int c = 72;

// 	printf("%s\n", s);
// 	printf("%d\n\n", c);

// 	printf("%s", ft_strchr(s, c));
// 	return 0;
// }
