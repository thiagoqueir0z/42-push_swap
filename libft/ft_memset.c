/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:06:44 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 15:06:12 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** BRIEF: Fills the first 'n' bytes of the memory area pointed to by 's' 
** with the constant byte 'c'.
**
** @param s A pointer to the memory area to be filled.
** @param c The byte value to be set, passed as an integer.
** @param n The number of bytes to be set to the value 'c'.
**
** @return A pointer to the memory area 's'.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;	

	p = (unsigned char *)s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}
