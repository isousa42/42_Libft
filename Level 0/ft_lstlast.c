
#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst)
    {
        if (lst->next == NULL)
            return (lst);
        lst = lst->next;
    }
}