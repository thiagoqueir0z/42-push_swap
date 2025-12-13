/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:06:33 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/25 09:17:03 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
* @brief Copies 'n' bytes from the source area ('src') 
* 	to the destination area ('dest'), ensuring the copy occurs 
* 	correctly even if the memory areas overlap.
*
* @param dest Pointer to the destination memory area.
* @param src Pointer to the source memory area (constant).
* @param n The number of bytes to be moved.
*
* @return A pointer to the original destination area ('dest').
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	d = (char *)dest;
	s = (const char *)src;
	if (d > s)
	{
		d += (n - 1);
		s += (n - 1);
		while (n--)
			*d-- = *s--;
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
