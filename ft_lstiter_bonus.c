/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:53:15 by francisr          #+#    #+#             */
/*   Updated: 2025/06/01 11:53:22 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (!lst)
		return ;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/*
void f(void *content)
{
    printf("content en f \"%s\"\n", (char *)content);
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
    ft_lstiter(*list, f);
    return (0);
}
*/
