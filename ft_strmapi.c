/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:01:44 by francisr          #+#    #+#             */
/*   Updated: 2025/05/26 20:02:15 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	c;
	char	*ch;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	ch = malloc(ft_strlen(s)+1);
	if (!ch)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		c = f(i, s[i]);
		ch[i] = c;
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
