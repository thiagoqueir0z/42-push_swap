/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:23:44 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/08 15:46:11 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	last_node = stack_last(*stack);
	*stack = first_node->next;
	first_node->next = NULL;
	last_node->next = first_node;
}

void	ra(t_stack **a, int print)
{
	rotate(a);
	if (print)
		ft_printf("ra\n");
}

void    rb(t_stack **b, int print)
{
        rotate(b);
        if (print)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, int print)
{
	rotate(a);
	rotate(b);
	if (print)
		ft_printf("rr\n");
}
