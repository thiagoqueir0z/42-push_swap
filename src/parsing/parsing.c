/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:57:28 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/09 15:14:43 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	free_args(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return ;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

static void	process_args(char **args, t_stack **stack_a)
{
	long	n;
	int		i;

	i = 0;
	while (args[i])
	{
		if (!is_numeric(args[i]))
		{
			free_args(args);
			error_exit(stack_a);
		}
		n = ft_atol(args[i]);
		if (!ft_check_limits(n) || ft_check_duplicate(*stack_a, (int)n))
		{
			free_args(args);
			error_exit(stack_a);
		}
		stack_add_back(stack_a, stack_new((int)n));
		i++;
	}
}

void	parse_init(t_stack **stack_a, int argc, char **argv)
{
	char	**args;
	int		i;

	i = 1;
	while (i < argc)
	{
		args = ft_split(argv[i], ' ');
		if (!args)
			error_exit(stack_a);
		process_args(args, stack_a);
		free_args(args);
		i++;
	}
}
