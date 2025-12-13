/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:49:55 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:51:26 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: Outputs the string 's' to the given file descriptor.
 *
 * Parameters:
 * s: The string to output (char *).
 * fd: The file descriptor to write to (int).
 *
 * Return:
 * None.
 */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
