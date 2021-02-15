
//#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int i;
	int j;

    i = 0;
	if (to_find[i] == '\0')
		return (str);

    while (str[i] != '\0' && i < n)
    {
		j = 0;
		while (str[i] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
				return (str + i - j);
			else
			{
				i++;
				j++;
			}
		}
		i++;
    }
	return (0);
}

int main()
{
	char str[] = "haystack and needle";
	char to_find[] = "cand";

	printf("%s\n", str);
	printf("%s\n\n", to_find);

	printf("%s", ft_strnstr(str, to_find, 16));
	return 0;

}
