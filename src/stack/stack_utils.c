/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:54:26 by thiferre          #+#    #+#             */
/*   Updated: 2025/12/22 16:54:29 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack *stack_new(int content)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if (!new)
        return (NULL);
    new->value = content;
    new->index = -1;
    new->next = NULL;
    return (new);
}

t_stack *stack_last(t_stack *stack)
{
    if(!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

void stack_add_back(t_stack **stack, t_stack *new)
{
    t_stack *last;
    if(!last)
        return ;
    if(!*stack)
    {
        *stack = new;
        return ;
    }
    last = stack_last(*stack);

    last->next = new;
}

int stack_size(t_stack *stack)
{
    int size;

    size = 0;
    while(stack)
    {
        stack = stack->next;
        size++;
    }
    return (size);
}