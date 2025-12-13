/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:28:00 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 11:56:48 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** BRIEF: Concatenates strings safely by taking the full size of the
** 	destination buffer (dst) and guaranteeing NUL-termination.
**
** @param dst The destination buffer (string to be appended to).
** @param src The source string to append to dst.
** @param size The total size of the destination buffer.
**
** @return The total length of the string it tried to create 
	(initial length of dst + length of src).
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	i = 0;
	while (dst[i] && i < size)
		i++;
	len_dst = i;
	if (len_dst == size)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dst + i + 1) < size)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
