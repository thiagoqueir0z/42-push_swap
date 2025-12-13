/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:12:37 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 11:28:00 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
* Brief Checks if a character is an alphabetic letter (a-z or A-Z).
*
* @param c The character to be checked, passed as an integer value.
* 
* @return 1 (non-zero) if the character 'c' is an alphabetic letter, 0 otherwise.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
