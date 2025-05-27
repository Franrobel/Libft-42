/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:12:30 by francisr          #+#    #+#             */
/*   Updated: 2025/05/21 19:12:38 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*together;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	together = malloc(s1len + s2len + 1);
	if (!together)
		return (NULL);
	together[s1len + s2len] = '\0';
	if (together)
	{
		ft_memcpy(together, s1, s1len);
		ft_memcpy(together + s1len, s2, s2len);
		together[s1len + s2len] = '\0';
	}
	return (together);
}
