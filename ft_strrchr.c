/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:10:05 by francisr          #+#    #+#             */
/*   Updated: 2025/05/16 12:14:17 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	size_t	length;

	ch = (char)c;
	length = ft_strlen(s)+1;
	while (length--)
	{
		if (s[length] == ch)
			return ((char *)&s[length]);
	}
	return (NULL);
}
