/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:39:58 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/08 15:43:04 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	push(t_stack **src, t_stack **dest)
{
	t_stack	*node_to_push;

	if (!src || !*src)
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	node_to_push->next = *dest;
	*dest = node_to_push;
}

void	pa(t_stack **a, t_stack **b, int print)
{
	push(b, a);
	if (print)
		ft_printf("pa\n");
}

void	pb(t_stack **b, t_stack **a, int print)
{
	push(a, b);
	if (print)
		ft_printf("pb\n");
}
