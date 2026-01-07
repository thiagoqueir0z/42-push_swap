/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:10:11 by thiferre          #+#    #+#             */
/*   Updated: 2025/12/13 17:10:14 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	long			value;
	int				index;
	struct s_stack	*next;
}	t_stack;

/* Parsing & Utils */
void	parse_init(t_stack **stack_a, int argc, char **argv);
int		is_numeric(char *str);
int		ft_check_duplicate(t_stack *stack, int n);
int		ft_check_limits(long n);
long	ft_atol(const char *str);

/* Stack Management */
t_stack	*stack_new(int content);
void	stack_add_back(t_stack **stack, t_stack *new_node);
t_stack	*stack_last(t_stack *stack);
int		stack_size(t_stack *stack);
void	free_stack(t_stack **stack);
void	error_exit(t_stack **stack);

/* Rules */
// void sa(t_stack **a, int print);
// ... (Adicionar quando implementar as regras)

/* Sort */
// void sort_radix(t_stack **a, t_stack **b);

#endif
