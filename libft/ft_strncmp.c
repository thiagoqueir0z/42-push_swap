/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:16:58 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 12:28:50 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief:
 * Compares the first 'n' bytes of the strings 's1' and 's2'.
 * 	The comparison is performed using unsigned character values.
 *
 * Parameters:
 * s1: The first string to be compared.
 * s2: The second string to be compared.
 * n: The maximum number of bytes to compare.
 *
 * Returns:
 * An integer less than, equal to, or greater than zero if the first 'n'
 * bytes of 's1' are found, respectively, to be less than, to match, or
 * be greater than the first 'n' bytes of 's2'.
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0 && *s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
