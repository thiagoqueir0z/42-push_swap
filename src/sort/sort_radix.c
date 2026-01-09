/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:06:05 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/09 15:40:51 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	get_max_bits(t_stack **stack)
{
	t_stack	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sort_radix(t_stack **stack_a, t_stack **stack_b)
{
	int	bits;
	int	i;
	int	size;
	int	max_bits;

	bits = -1;
	size = stack_size(*stack_a);
	max_bits = get_max_bits(stack_a);
	while (!is_sorted(*stack_a) && ++bits < max_bits)
	{
		i = -1;
		while (++i < size)
		{
			if ((((*stack_a)->index >> bits) & 1))
				ra(stack_a, 1);
			else
				pb(stack_b, stack_a, 1);
		}
		while (*stack_b)
			pa(stack_a, stack_b, 1);
	}
}
