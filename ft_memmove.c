/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:21:32 by francisr          #+#    #+#             */
/*   Updated: 2025/05/14 23:22:04 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*byte_dest;
	const unsigned char	*byte_src;

	byte_dest = (unsigned char *)dest;
	byte_src = (const unsigned char *)src;
	if (byte_dest < byte_src)
		ft_memcpy(dest, src, n);
	else if (byte_dest > byte_src)
		while (n--)
			byte_dest[n] = byte_src[n];
	return (dest);
}
