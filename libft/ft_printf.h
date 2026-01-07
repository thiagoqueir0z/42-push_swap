/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:57:23 by thiferre          #+#    #+#             */
/*   Updated: 2025/11/12 15:50:17 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_decimalprint(unsigned int nb);
int	ft_hexprint(unsigned long int nb, int caseflag);
int	ft_ptrprint(void *ptr);
int	ft_putchar(char c);
int	ft_putstr(char *str);

#endif
