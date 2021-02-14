
//#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char conv;
	char *str = (char *)s;
	int temp;
	int i;

	conv = (unsigned char) c;
	i = 0;
	temp = 0;
	if (conv == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if(str[i] == conv)
		{
			temp = i;
			i++;
		}
		else
			i++;
	}
	if (temp == 0)
		return 0;
	else
		return (str + temp);
}

int main()
{
	char s[] = "haystack";
	int c = 97;

	printf("%s\n", s);
	printf("%d\n\n", c);

	printf("%s", ft_strrchr(s, c));
	return 0;
}
