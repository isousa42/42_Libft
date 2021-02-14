

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
	int i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return 0;
    while (i < count)
    {
        ((unsigned char *)ptr)[i] = '\0';
        i++;
    }
	return (ptr);
}
