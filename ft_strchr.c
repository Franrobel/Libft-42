/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:25:55 by francisr          #+#    #+#             */
/*   Updated: 2025/05/16 12:25:59 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	size_t	length;
	size_t	index;

	ch = (char)c;
	length = ft_strlen(s)+1;
	index = 0;
	while (index <= length)
	{
		if (s[index] == ch)
			return ((char *)&s[index]);
		index++;
	}
	return (NULL);
}
