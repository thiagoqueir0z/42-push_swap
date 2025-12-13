/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:56:33 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:59:09 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: 
 * Outputs the integer 'n' to the given file descriptor.
 *
 * Parameters:
 * n: The integer to output (int).
 * fd: The file descriptor to write to (int).
 *
 * Return:
 * None.
 */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
