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

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	printf("s1 \"%s\"\n", s1);
	printf("s2 \"%s\"\n", s2);
	//char	*str1;
	//char	*str2;
	
	size_t	s1len = ft_strlen(s1);
	size_t	s2len = ft_strlen(s2);
	
	char	*together = malloc(s1len+s2len+1);
	if(!together)
		return (NULL);
	ft_memset(together, '-', s1len+s2len);
	together[s1len+s2len] = '\0';
	printf("%s\n", together);
	ft_memcpy(together, s1, s1len);
	ft_memcpy(together + s1len, s2, s2len);
	together[s1len + s2len] = '\0'; 
	printf("ft_memcpy \"%s\"\n", together);
	return (together);
/*

Parámetros 
s1: La primera string.
s2: La string a añadir a ’s1’.

Valor devuelto La nueva string.
NULL si falla la reserva de memoria.

Funciones autorizadas
malloc

Descripción Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.
*/	

}
