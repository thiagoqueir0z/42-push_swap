/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:53:56 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:55:15 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Brief: 
 * Outputs the string 's' to the given file descriptor, 
 * 	followed by a newline character.
 *
 * Parameters:
 * s: The string to output (char *).
 * fd: The file descriptor to write to (int).
 *
 * Return:
 * None.
 */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
