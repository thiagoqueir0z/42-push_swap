/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:38:03 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:46:00 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: 
 * Applies the function 'f' to each character of the string 's' 
 * 	to create a new string (with malloc) resulting from the successive 
 * 	applications of 'f'. The function 'f' receives the character's index 
 * 	and the character itself.
 *
 * Parameters:
 * s: The string to be iterated over (char const *).
 * f: The function to apply to each character (char (*f)(unsigned int, char)).
 *
 * Return:
 * The new string created from the results of 'f', 
 * 	or NULL if the allocation fails.
 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	if (!s)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
