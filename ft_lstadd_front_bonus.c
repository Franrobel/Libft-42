/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:12:55 by francisr          #+#    #+#             */
/*   Updated: 2025/05/30 12:13:03 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*origin = ft_lstnew("va uno mas");
	t_list	*nueva = malloc(sizeof(t_list));
	//(char *)lista->content = "HOLA";
	ft_lstadd_front(&origin, nueva);
}
*/
