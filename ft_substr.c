/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:07:41 by francisr          #+#    #+#             */
/*   Updated: 2025/05/21 14:08:24 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpys;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		cpys = malloc(1);
		if (!cpys)
			return (NULL);
		cpys[0] = '\0';
		return (cpys);
	}
	cpys = malloc((len + 1) * sizeof(char));
	if (!cpys)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		cpys[i] = s[start];
		start++;
		i++;
	}
	cpys[i] = '\0';
	return (cpys);
}
