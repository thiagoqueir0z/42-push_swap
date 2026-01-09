/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:10:11 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/09 16:54:56 by thiferre         ###   ########.fr       */
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
void	index_stack(t_stack **stack);

/* Stack Management */
t_stack	*stack_new(int content);
void	stack_add_back(t_stack **stack, t_stack *new_node);
t_stack	*stack_last(t_stack *stack);
int		stack_size(t_stack *stack);
void	free_stack(t_stack **stack);
void	error_exit(t_stack **stack);

/* Rules */
void	sa(t_stack **a, int print);
void	sb(t_stack **b, int print);
void	ss(t_stack **a, t_stack **b, int print);
void	pa(t_stack **a, t_stack **b, int print);
void	pb(t_stack **b, t_stack **a, int print);
void	ra(t_stack **a, int print);
void	rb(t_stack **b, int print);
void	rr(t_stack **a, t_stack **b, int print);
void	rra(t_stack **a, int print);
void	rrb(t_stack **b, int print);
void	rrr(t_stack **a, t_stack **b, int print);

/* Sort */
void	sort_three(t_stack **a);
bool	is_sorted(t_stack *stack);
void	sort_radix(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **a, t_stack **b);

#endif
