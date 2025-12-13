/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:29:52 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 13:00:36 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Brief: Locates the first occurrence of the null-terminated string 'needle' 
** 	in the string 'haystack', where the search is limited 
**	to the first 'len' bytes of 'haystack'.
**
** @param haystack The string to be searched (the larger string).
** @param needle The string to find (the substring).
** @param len The maximum number of bytes to be searched in haystack.
**
** @return A pointer to the beginning of the located substring. 
** 	Returns NULL if the substring is not found or if 'len' is reached 
** 		before the full 'needle' is found.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
