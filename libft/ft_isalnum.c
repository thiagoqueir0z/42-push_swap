/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:07:56 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 17:01:26 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Brief: Checks if a character is alphanumeric 
**	(an alphabetic letter or a decimal digit).
**
** @param c The character to be checked, passed as an integer value.
**
** @return 1 (non-zero) if the character 'c' is alphanumeric, 0 otherwise.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	int	is_alpha;
	int	is_digit;

	is_alpha = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	is_digit = (c >= '0' && c <= '9');
	if (is_alpha || is_digit)
		return (1);
	return (0);
}
