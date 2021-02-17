
//#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	char *string;

	string = str;
	while (*string != '\0')
	{
		write(fd, string, 1);
		string++;
	}
}
