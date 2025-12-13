/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:48:50 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/25 09:10:21 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
* @brief Copies 'n' bytes from memory area 'src' to memory area 'dest'.
* 		The memory areas MUST NOT overlap.
*
* @param dest Pointer to the destination memory area.
* @param src Pointer to the source memory area (constant).
* @param n The number of bytes to be copied.
*
* @return A pointer to the original destination area ('dest').
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	d = (char *)dest;
	s = (const char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
