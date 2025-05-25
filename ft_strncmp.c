/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:19:35 by francisr          #+#    #+#             */
/*   Updated: 2025/05/16 12:20:32 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;
	size_t					counter;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (*str1 != *str2 || *str1 == '\0' || *str2 == '\0')
			return (*str1 - *str2);
		str1++;
		str2++;
		counter++;
	}
	return (0);
}
