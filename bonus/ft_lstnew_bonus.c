
#include "../libft.h"
#include <stdio.h>

t_list  *ft_lstnew_bonus(void *content)
{
    t_list *newel;

    newel = (t_list *)malloc(sizeof(t_list));
    if (!newel)
        return (NULL);
    newel->content = content;
    newel->next = NULL;
    return (newel);
}