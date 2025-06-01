/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:34:16 by francisr          #+#    #+#             */
/*   Updated: 2025/05/30 15:40:00 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
/*
int	main(void)
{
	t_list	*origin = ft_lstnew("va uno mas");
	t_list	*nueva = malloc(sizeof(t_list));
	t_list	*otra = malloc(sizeof(t_list));
	t_list	*mas = malloc(sizeof(t_list));
	t_list	*tra = malloc(sizeof(t_list));

	ft_lstadd_front(&origin, nueva);
	ft_lstadd_front(&origin, otra);
	ft_lstadd_front(&origin, mas);
	ft_lstadd_front(&origin, tra);
	ft_lstlast(origin);
	return (0);
}

*/
