/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:35:29 by francisr          #+#    #+#             */
/*   Updated: 2025/05/18 11:49:55 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lsrc;
	size_t	ldst;

	i = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (size <= ldst)
	{
		return (size + lsrc);
	}
	if (size > ldst)
	{
		while (src[i] != '\0' && i < size - ldst - 1)
		{
			dst[ldst + i] = src[i];
			i++;
		}
		dst[ldst + i] = '\0';
	}
	return (lsrc + ldst);
}
