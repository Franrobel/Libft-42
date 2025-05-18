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
	printf("big   is  %s\n", big);
	printf("little is %s\n", little);
	printf("len   is  %zu   \n", len);
	size_t	i;
	size_t	j;
	size_t	lenlit;
	
	i = 0;
	lenlit = ft_strlen(little);
	printf("len little %zu\n", lenlit);
	//If little is an empty string, big is returned
	if (*little == '\0')
		return ((char *)big);
	//if little occurs nowhere in big, NULL is returned
	
	while (big[i] != '\0')
	{
		//printf("i %zu < len %zu  big[%zu] %c little[%zu] %c\n", i, len, i, big[i], i, little[i]);
		j = 0;
		while (j < lenlit || i < len)
		{	if(little[j] == big[i])
			{
				printf("if loop i %zu / j %zu\n", i, j);
				i++; // a0 = h0 X a0 = o1 X a0 = l2 X a0 = a3 V
				j++; // 0 1 2
			} 
			else
			{
			printf("else loop i %zu / j %zu\n", i, j);
				i++; // 0 1 2 3
			}
		}
			size_t ind = i - j;
			printf("fuera loop i %zu / j %zu ind %zu\n", i, j, ind);
			printf("(char *)&big[j] %s\n", (char *)&big[j]);
			return ((char *)&big[j]);
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
