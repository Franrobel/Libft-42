/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 13:21:18 by francisr          #+#    #+#             */
/*   Updated: 2025/05/18 13:21:53 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && (i + j) < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return NULL;
}
	
/*
big    =  "hola"
	   01234567
little =  "a p" lenght 3 
	   012
   len =   5

lenlittle = 3 al ser < que len puedo buscar 
si lenlittle > len hay partes de little != big
 
la diff entre lenlit 4 y len 6 es 2 
tengo que busca solo 2 lugares
osea donde esta  "a p" en "hola pol"

devolver puntero a big donde comienza la coincidencia

*/
