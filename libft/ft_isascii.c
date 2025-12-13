/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:38:02 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/25 08:54:31 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Brief: Checks if a character value is a valid ASCII character (0 to 127).
**
** @param c The character value to be checked, passed as an integer.
** 
** @return 1 (non-zero) if the value of 'c' is an ASCII character, 0 otherwise.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
