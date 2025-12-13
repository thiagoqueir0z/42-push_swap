/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:13:43 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 15:24:42 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief:
 * Scans the initial 'n' bytes of the memory area pointed to by 's'
 * 	for the first instance of the byte 'c'.
 *
 * Parameters:
 * s: The memory area to be scanned.
 * c: The byte to search for, passed as an int.
 * n: The number of bytes to inspect.
 *
 * Returns:
 * A pointer to the first matching byte, or NULL if the byte is not found
 * 	in the specified number of bytes.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (NULL);
}
