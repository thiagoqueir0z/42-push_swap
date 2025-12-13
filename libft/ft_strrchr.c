/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:11:04 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/25 09:23:34 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Brief: Locates the last occurrence of the character 'c' 
**	in the string pointed to by 's'.
**
** @param s The string to be searched.
** @param c The character to locate, passed as an integer.
**
** @return A pointer to the last occurrence of 'c' in 's'. 
** 	Returns NULL if the character is not found.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*p;
	unsigned char	uc;

	p = s;
	uc = (unsigned char)c;
	while (*p)
		p++;
	while (p >= s)
	{
		if (*p == uc)
			return ((char *)p);
		p--;
	}
	return (NULL);
}
