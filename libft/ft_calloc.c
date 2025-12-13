/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <thiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:26:39 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 16:27:06 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** BRIEF: 
** Allocates memory for an array of 'count' elements of 'size' bytes each, 
** 	and returns a pointer to the allocated memory. The memory is set to zero.
**
** @param count The number of elements to allocate.
** @param size The size in bytes of each element.
**
** @return A pointer to the allocated memory. 
** 	If 'count * size' results in an overflow, or if the allocation fails, 
** 	NULL is returned.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*p;
	size_t		total_size;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	p = malloc(total_size);
	if (!p)
		return (NULL);
	ft_bzero (p, total_size);
	return (p);
}
