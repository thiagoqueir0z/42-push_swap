/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:59:30 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 11:41:18 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief:
 * Converts an uppercase letter to its lowercase equivalent.
 * 	If the character is already lowercase, a digit, or a symbol,
 * 	it is returned unchanged.
 *
 * Parameters:
 * c: The character to be checked, passed as an int.
 *
 * Returns:
 * The lowercase equivalent of 'c' if 'c' is uppercase; otherwise, 'c' itself.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
