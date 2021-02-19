
#include "libft.h"

void    ft_lstadd.back(t_list **lst, t_list *new)
{
    while(lst->next != NULL)
        lst = lst->next;
    lst->next = new;
    new->next = NULL;
}