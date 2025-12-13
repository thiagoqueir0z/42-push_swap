/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:19:25 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 15:23:56 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Compares the first 'n' bytes of the memory areas 's1' and 's2'.
 * 	It is performed byte by byte using unsigned character values.
 *
 * Parameters:
 * s1: The first memory area to be compared.
 * s2: The second memory area to be compared.
 * n: The maximum number of bytes to compare.
 *
 * Returns:
 * An integer less than, equal to, or greater than zero if the first 'n'
 * 	bytes of 's1' are found, respectively, to be less than, to match, or
 * 	be greater than the first 'n' bytes of 's2'.
 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*dst;
	const unsigned char	*src;

	dst = (const unsigned char *)s1;
	src = (const unsigned char *)s2;
	while (n--)
	{
		if (*dst != *src)
			return (*dst - *src);
		dst++;
		src++;
	}
	return (0);
}
