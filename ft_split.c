/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:50:41 by francisr          #+#    #+#             */
/*   Updated: 2025/05/26 12:04:42 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	countstrings(const char *s, char c)
{
	size_t	i;
	size_t	cins;
	size_t	strings;

	cins = 0;
	strings = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && cins == 0)
		{
			strings++;
			cins = 1;
		}
		else if (s[i] == c)
			cins = 0;
		i++;
	}
	return (strings);
}

static char	**inarray(char **array, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	idx;

	i = 0;
	idx = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			array[idx++] = ft_substr(s, start, i - start);
		}
		else
			i++;
	}
	array[idx] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	strings;

	strings = countstrings(s, c);
	array = malloc((strings + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (inarray(array, s, c));
}
