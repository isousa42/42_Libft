
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *first;

    if (!lst)
        return 0;
    new = f(lst);
    lst = lst->next;
    first = new;
    while (lst)
    {
        new->next = f(lst);
        new = new->next;
        lst = lst->next;
    }
    return (first);
}
