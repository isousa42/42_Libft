
//include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	if (nb < 0)
	{
		num = (unsigned int)(-1 * nb);
		ft_putchar('-', fd);
	}
	else
	{
		num = (unsigned int)(nb);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0', fd);
	}
}
