/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:49:09 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 11:37:18 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief:
 * Checks whether a character is printable (ASCII values from 32 to 126).
 *
 * Parameter:
 * c: The integer value to be checked.
 *
 * Return:
 * A non-zero value if the character is printable, 0 otherwise.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
