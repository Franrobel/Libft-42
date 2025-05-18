/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:05:31 by francisr          #+#    #+#             */
/*   Updated: 2025/05/13 13:06:42 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		byte_ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
