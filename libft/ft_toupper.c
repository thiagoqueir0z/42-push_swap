/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:47:55 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 11:39:45 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
 * Brief:
 * Converts a lowercase letter to its uppercase equivalent.
 * 	If the character is already uppercase, a digit, or a symbol,
 * 	it is returned unchanged.
 *
 * Parameters:
 * c: The character to be checked, passed as an int.
 *
 * Returns:
 * The uppercase equivalent of 'c' if 'c' is lowercase; otherwise, 'c' itself.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
