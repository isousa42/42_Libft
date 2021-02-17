
//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	int i;
	int size;

	i = 0;
	size = ft_strlen(s);
	new = (char *)malloc(size + 1) * sizeof(char));
	if(!new || !s || !f)
		return(NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

