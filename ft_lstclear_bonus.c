/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:53:41 by francisr          #+#    #+#             */
/*   Updated: 2025/06/01 11:53:45 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
    ft_lstclear(list, del);
    return (0);
}  
*/
