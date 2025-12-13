/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:06:47 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/25 08:58:41 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: Duplicates a string by allocating memory and copying the content.
 *
 * Parameters:
 * s: The string to be duplicated (const char *).
 *
 * Return:
 * A pointer to the newly allocated duplicate string (char *). 
 * NULL if the allocation fails.
 */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = (char *)malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>

int main(void)
{
    char *original = "Piscine 42";
    char *copy = ft_strdup(original);

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    free(copy);
    return (0);
}
*/
