/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:23 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 11:44:18 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * @brief Calculates the length of the string pointed to by 's', 
 * 	excluding the terminating null byte ('\0'). 
 *
 * @param s Pointer to the constant string.
 *
 * @return The number of bytes in the string (size_t).
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
