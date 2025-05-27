/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisr <francisr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:03:17 by francisr          #+#    #+#             */
/*   Updated: 2025/05/16 12:04:33 by francisr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	ch;

	if (c == EOF)
		return (EOF);
	ch = (unsigned char)c;
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	else
		return (ch);
}
