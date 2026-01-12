/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:19:26 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/12 12:26:00 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	parse_init(&stack_a, argc, argv);
	if (is_sorted(stack_a))
		return (free_stack(&stack_a), 0);
	index_stack(&stack_a);
	size = stack_size(stack_a);
	if (size == 2)
		sa(&stack_a, 1);
	else if (size == 3)
		sort_three(&stack_a);
	else if (size <= 5)
		sort_five(&stack_a, &stack_b);
	else
		sort_radix(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
