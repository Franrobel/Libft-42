/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:29:48 by francisr          #+#    #+#             */
/*   Updated: 2025/05/22 11:31:10 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	while (ft_strrchr(set, s1[end]))
		end--;
	result = malloc(end - start + 2);
	if (!result)
		return (NULL);
	return (ft_substr(s1, start, end - start + 1));
}
