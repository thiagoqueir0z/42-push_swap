/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:27:38 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:37:00 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: Allocates (with malloc) and returns a string representing the integer
 * received as an argument. Negative numbers must be handled.
 *
 * Parameters:
 * n: The integer to convert (int).
 *
 * Return:
 * The string representation of the integer, or NULL if the allocation fails.
 */

#include "libft.h"

/*
 * Calculates the total number of characters required to represent 
 * the number 'n', including the negative sign if present.
*/

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	nb;

	len = ft_numlen(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	nb = n;
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		s[0] = '0';
	while (nb > 0)
	{
		s[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (s);
}
