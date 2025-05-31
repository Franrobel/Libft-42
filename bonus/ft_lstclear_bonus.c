#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(*lst);
	*lst = NULL;
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
    nodo1->next = nodo2;
    nodo2->next = NULL;
    t_list **list = &nodo1;
    ft_lstclear(*list, del);
    return (0);
}  

Parámetros 
lst: la dirección de un puntero a un nodo.
del: un puntero a función utilizado para eliminar el contenido de un nodo.

Valor devuelto Nada

Funciones autorizadas
free

Descripción Elimina y libera el nodo ’lst’ dado y todos los
consecutivos de ese nodo, utilizando la función
’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.
*/
