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

#include "libft.h"

static char	*makecpystr(char *subs, const char *oris, unsigned int st, size_t l)
{
	size_t	i;

	i = 0;
	while (i < l)
	{
		subs[i] = oris[st + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpys;

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
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	cpys = malloc((len + 1) * sizeof(char));
	if (!cpys)
		return (NULL);
	return (makecpystr(cpys, s, start, len));
}
