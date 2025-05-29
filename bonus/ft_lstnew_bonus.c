
#include "libft_bonus.h"
#include "../libft.h"
#include <stdio.h>

t_list  *ft_lstnew(void *content)
{
    char    *j;
    
    j = (char *)content;
    printf("content \"%s\"\n", j);
    return (content);
}

int main(void)
{
    ft_lstnew("HOLA");
}
/*
Parámetros content: el contenido con el que crear el nodo.
Valor devuelto El nuevo nodo
Funciones autorizadas
malloc
Descripción Crea un nuevo nodo utilizando malloc(3). La
variable miembro ’content’ se inicializa con el
contenido del parámetro ’content’. La variable
’next’, con NULL.
*/