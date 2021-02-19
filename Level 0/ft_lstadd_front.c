
#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return 0;
    if (!*lst)
    {
        *lst = new;
        return 0;
    }
    new->next = *lst;
    *lst = new;
}