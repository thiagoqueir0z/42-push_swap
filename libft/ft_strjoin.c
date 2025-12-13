/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:53:18 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:24:30 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: Concatenates two strings (s1 and s2) into a newly allocated string.
 *
 * Parameters:
 * s1: The prefix string (char const *).
 * s2: The suffix string (char const *).
 *
 * Return:
 * A pointer to the newly allocated and null-terminated string, or NULL
 * if memory allocation fails or if s1 or s2 is NULL.
 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = (char *)malloc(s1_len + s2_len + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, s1_len);
	ft_memcpy(join + s1_len, s2, s2_len);
	join[s1_len + s2_len] = '\0';
	return (join);
}

/* #include <stdio.h>

int main()
{
  char const  *s1 = "fil";
  char const  *s2 = "ipa";
  char        *join;

  join = ft_strjoin(s1, s2);
  printf("%s", join);
  free(join);
  return (0);
} */
