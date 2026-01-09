/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:50:08 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/09 16:50:10 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	get_min_pos(t_stack *stack, int min_val)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->index == min_val)
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}

static int	get_min_val(t_stack *stack)
{
	int	min;

	min = stack->index;
	while (stack)
	{
		if (stack->index < min)
			min = stack->index;
		stack = stack->next;
	}
	return (min);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_pos;

	while (stack_size(*a) > 3)
	{
		min_pos = get_min_pos(*a, get_min_val(*a));
		if (min_pos == 0)
			pb(b, a, 1);
		else if (min_pos <= stack_size(*a) / 2)
			ra(a, 1);
		else
			rra(a, 1);
	}
	sort_three(a);
	while (*b)
		pa(a, b, 1);
}
