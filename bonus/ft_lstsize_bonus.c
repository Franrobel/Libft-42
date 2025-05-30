/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:18:09 by francisr          #+#    #+#             */
/*   Updated: 2025/05/30 14:19:54 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		lenght;

	lenght = 0;
	tmp = lst;
	while (tmp)
	{
		lenght++;
		tmp = tmp->next;
	}
	return (lenght);
}
/*
int	main(void)
{
	t_list	*origin = ft_lstnew("va uno mas");
	t_list	*nueva = malloc(sizeof(t_list));
	t_list	*otra = malloc(sizeof(t_list));
	t_list	*mas = malloc(sizeof(t_list));

	ft_lstadd_front(&origin, nueva);
	ft_lstadd_front(&origin, otra);
	ft_lstadd_front(&origin, mas);
	ft_lstsize(origin);
	return (0);
}
*/
