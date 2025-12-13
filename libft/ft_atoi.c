/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:03:11 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 13:04:11 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** BRIEF Converts the initial portion of the string pointed to by 'str' 
** to its integer representation.
**
** @param str The string to be converted.
**
** @return The integer value represented by the string. 
** 
** Note: Standard C 'atoi' does not define behavior on overflow, 
**	but a good implementation can handle it by using 'long'.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result > INT_MAX && sign == 1)
			return (INT_MAX);
		if (result > (long)INT_MAX + 1 && sign == -1)
			return (INT_MIN);
		str++;
	}
	return ((int)(result * sign));
}
