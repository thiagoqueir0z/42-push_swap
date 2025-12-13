/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:56:10 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 15:08:54 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
* @brief Erases the data in the n bytes of the memory starting at the location
* pointed to by s, by writing zeros (bytes containing '\0') to that area.
* It is equivalent to ft_memset(s, 0, n).
*
* @param s Pointer to the start of the memory area to be zeroed.
* @param n The number of bytes to be zeroed.
*
* @return None. (void function)
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	if (n == 0)
		return ;
	p = (char *)s;
	while (n--)
		*p++ = 0;
}
