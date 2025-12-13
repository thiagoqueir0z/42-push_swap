/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:34:00 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/25 09:27:50 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: Extracts a substring from string 's' starting at index 'start'
 * with a maximum length of 'len'. Allocates memory for the new string.
 *
 * Parameters:
 * s: The source string.
 * start: The starting index (unsigned int).
 * len: The maximum length of the substring to extract (size_t).
 *
 * Return:
 * A pointer to the newly allocated and null-terminated substring, or NULL
 * if memory allocation fails or if 's' is NULL.
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/* #include <stdio.h>

int main()
{
  char const    *s = "infelizmente";
  unsigned int  start = 2;
  size_t        len = 5;
  char          *sub;

  sub = ft_substr(s, start, len);
  if (!sub)
    return (1);
  printf("%s", sub);
  free(sub);
  return (0);
} */
