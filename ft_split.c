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

#include "libft.h"

static size_t	countstrings(const char *s, char c)
{
	size_t	i;
	size_t	cins;
	size_t	strings;

	i = 0;
	cins = 0;
	strings = 0;
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

static void	freearr(char **array, size_t count)
{
	while (count > 0)
		free(array[--count]);
	free(array);
}

static int	getsubstr(char **arr, const char *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	arr[0] = ft_substr(s, start, len);
	return (arr[0] == NULL);
}

static char	**fillarr(char **array, const char *s, char c)
{
	size_t	i;
	size_t	idx;

	i = 0;
	idx = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (getsubstr(&array[idx], s, c, &i))
			{
				freearr(array, idx);
				return (NULL);
			}
			idx++;
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

	if (!s)
		return (NULL);
	strings = countstrings(s, c);
	array = malloc((strings + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (fillarr(array, s, c));
}
