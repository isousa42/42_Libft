
#include "libft.h"

int ft_lstsize(t_list *lst);
{
    int counter;

    while (lst)
    {
        lst = lst->next;
        counter++;
    }
    return (counter);
}