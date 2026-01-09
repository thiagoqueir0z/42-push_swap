/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:48:53 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/09 10:48:55 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static t_stack	*find_highest(t_stack *stack)
{
	int		highest;
	t_stack	*highest_node;

	if (!stack)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if (stack->value > highest)
		{
			highest = stack->value;
			highest_node = stack;
		}
		stack = stack->next;
	}
	return (highest_node);
}

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

bool	is_sorted(t_stack *stack)
{
	if (!stack)
		return (true);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	sort_three(t_stack **a)
{
	t_stack	*highest_node;

	highest_node = find_highest(*a);
	if (*a == highest_node)
		ra(a, 1);
	else if ((*a)->next == highest_node)
		rra(a, 1);
	if ((*a)->value > (*a)->next->value)
		sa(a, 1);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	size;
	int	min_pos;

	size = stack_size(*a);
	while (size > 3)
	{     
		t_stack *tmp = *a;
        int min = tmp->index;
        while(tmp) {
            if (tmp->index < min) min = tmp->index;
            tmp = tmp->next;
        } 
        min_pos = get_min_pos(*a, min);
		if (min_pos == 0)
			pb(b, a, 1);
		else if (min_pos <= size / 2)
			ra(a, 1);
		else
			rra(a, 1);
		if (stack_size(*a) < size)
			size--;
	}
	sort_three(a);
	while (*b)
		pa(a, b, 1);
}