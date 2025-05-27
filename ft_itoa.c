/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:01:33 by francisr          #+#    #+#             */
/*   Updated: 2025/05/26 12:38:40 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	memneed(int n)
{
	long	nbr;
	int		strlen;

	strlen = 0;
	nbr = n;
	if (nbr < 0)
	{
		strlen++;
		nbr = -nbr;
	}
	if (nbr == 0)
		strlen = 1;
	else
	{
		while (nbr > 0)
		{
			strlen++;
			nbr /= 10;
		}
	}
	return (strlen);
}

static char	*createstr(char *str, int lenght, int n)
{
	long	nbr;

	nbr = n;
	str[--lenght] = '\0';
	if (nbr == 0)
		str[--lenght] = '0';
	else
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			str[0] = '-';
		}
		while (nbr > 0)
		{
			str[--lenght] = (nbr % 10) + '0';
			nbr /= 10;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		lenght;
	char	*strmem;
	char	*str;

	lenght = memneed(n) + 1;
	strmem = malloc(lenght * sizeof(char));
	if (!strmem)
		return (NULL);
	str = createstr(strmem, lenght, n);
	return (str);
}
