/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:58:33 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/25 08:58:15 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: Removes all characters specified in 'set' from the beginning and 
 * 	the end of 's1', and returns a new dynamically allocated string.
 *
 * Parameters:
 * s1: The string to be trimmed (char const *).
 * set: The reference set of characters to trim (char const *).
 *
 * Return:
 * The trimmed, newly allocated and null-terminated string, or NULL.
 * 	if memory allocation fails or if s1 is NULL.
 */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
