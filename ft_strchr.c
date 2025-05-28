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
	size_t	idx;

	ch = (char)c;
	idx = 0;
	while (s[idx])
	{
		if (s[idx] == ch)
			return ((char *)&s[idx]);
		idx++;
	}
	if (ch == '\0')
		return ((char *)&s[idx]);
	return (NULL);
}
