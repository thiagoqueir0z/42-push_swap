/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:56:07 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 17:00:55 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
* Brief: Checks if a character is a decimal digit (0 through 9).
*
* @param c The character to be checked, passed as an integer value.
*
* @return 1 (non-zero) if the character 'c' is a digit (0-9), 0 otherwise.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
