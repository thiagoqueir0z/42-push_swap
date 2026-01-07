/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:31:36 by thiferre          #+#    #+#             */
/*   Updated: 2025/11/12 13:31:42 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_argscondition(va_list args, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_ptrprint(va_arg(args, void *)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (type == 'u')
		return (ft_decimalprint(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (ft_hexprint(va_arg(args, unsigned int), 0));
	else if (type == 'X')
		return (ft_hexprint(va_arg(args, unsigned int), 1));
	else if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_argscondition(args, format[i]);
		}
		else
		{
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
