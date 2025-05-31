#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnod;
	t_list	*newlst;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newnod = ft_lstnew(f(lst->content));
		if (!newnod)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnod);
		lst = lst->next;
	}
	return (newlst);
}
/*
Parámetros 
lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada en la iteración 
de cada elemento de la lista.
del: un puntero a función utilizado para eliminar el contenido 
de un nodo, si es necesario.

Valor devuelto La nueva lista.
NULL si falla la reserva de memoria.

Funciones autorizadas
malloc, free

Descripción Itera la lista ’lst’ 
y aplica la función ’f’ al contenido de cada nodo. 
Crea una lista resultante de la aplicación correcta 
y sucesiva de la función ’f’ sobre cada nodo. 
La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta.
*/
