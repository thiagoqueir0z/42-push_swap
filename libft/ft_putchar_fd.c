/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:46:57 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:49:15 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: Outputs the character 'c' to the given file descriptor.
 *
 * Parameters:
 * c: The character to output (char).
 * fd: The file descriptor to write to (int).
 *
 * Return:
 * None.
 */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
