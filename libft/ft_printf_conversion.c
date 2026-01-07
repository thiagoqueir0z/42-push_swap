/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:18:23 by thiferre          #+#    #+#             */
/*   Updated: 2025/11/12 14:19:52 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nb;
	int			len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len += ft_putchar('-');
	}
	if (nb > 9)
		len += ft_putnbr(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}

int	ft_decimalprint(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_decimalprint(nb / 10);
	}
	len += ft_putchar((nb % 10) + '0');
	return (len);
}

int	ft_hexprint(unsigned long int nb, int caseflag)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		len++;
		if (caseflag == 0)
			write(1, &"0123456789abcdef"[nb], 1);
		else if (caseflag == 1)
			write(1, &"0123456789ABCDEF"[nb], 1);
	}
	if (nb >= 16)
	{
		len += ft_hexprint(nb / 16, caseflag);
		len += ft_hexprint(nb % 16, caseflag);
	}
	return (len);
}

int	ft_ptrprint(void *ptr)
{
	int	result;

	result = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	else
		result += ft_putstr("0x");
	result += ft_hexprint((unsigned long int) ptr, 0);
	return (result);
}
