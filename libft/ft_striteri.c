/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:41:59 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:45:35 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: 
 * Applies the function 'f' on each character of the string 's' 
 * 	with its index passed as the first argument to 'f'. 
 * 	Each character is passed by address to 'f' to be modified in-place.
 *
 * Parameters:
 * s: The string to iterate over and potentially modify (char *).
 * f: The function to apply (void (*f)(unsigned int, char *)).
 *
 * Return:
 * None.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
