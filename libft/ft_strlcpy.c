/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:24:47 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 11:48:37 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * Brief:
 * Copies strings, ensuring safety by taking the full size of the
 * 	destination buffer (dst).
 *
 * Parameters:
 * dst: The destination buffer.
 * src: The source string to copy from.
 * size: The total size of the destination buffer.
 *
 * Returns:
 * The total length of the source string (the length it tried to create).
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
