/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:57:36 by francisr          #+#    #+#             */
/*   Updated: 2025/05/30 15:01:29 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (!lst)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
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
