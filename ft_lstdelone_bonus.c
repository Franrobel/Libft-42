#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del(void *content)
{
    free(content);
}
int main(void)
{
    // crea nodos nodox->conent = parametro y nodox->next = NULL
    t_list *nodo1 = ft_lstnew(ft_strdup("UNO"));
    t_list *nodo2 = ft_lstnew(ft_strdup("DOS"));
    t_list *nodo3 = ft_lstnew(ft_strdup("TRES"));
    nodo1->next = nodo2;
    nodo2->next = nodo3;
    nodo3->next = NULL;
    t_list **list = &nodo1;
    ft_lstdelone(*list, del);
    return (0);
}
*/
