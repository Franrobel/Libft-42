/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:52:29 by francisr          #+#    #+#             */
/*   Updated: 2025/06/01 11:52:34 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnod;
	t_list	*newlst;
	void	*contfunc;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		contfunc = f(lst->content);
		newnod = ft_lstnew(contfunc);
		if (!newnod)
		{
			del(contfunc);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnod);
		lst = lst->next;
	}
	return (newlst);
}
/*
void *func(void *content)
{
	return (ft_strdup((char *)content));
}

void del(void *content)
{
    free(content);
}

int	main(void)
{
	t_list *string1 = ft_lstnew(ft_strdup("uno"));
	t_list *string2 = ft_lstnew(ft_strdup("dos"));
	t_list *string3 = ft_lstnew(ft_strdup("tres"));
	string1->next = string2;
	string2->next = string3;
	
	//ft_lstadd_back(&string1, string2);
	//ft_lstadd_back(&string1, string3);

	t_list *newlst = ft_lstmap(string1, func, del);
	
	t_list *temp = newlst;
	while (temp)
	{
		printf("list after map: \"%s\"\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&string1, del);
	ft_lstclear(&newlst, del);
}
*/
