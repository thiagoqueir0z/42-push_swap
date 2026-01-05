/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:57:28 by thiferre          #+#    #+#             */
/*   Updated: 2026/01/05 14:57:29 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void free_args(char **args)
{
    int i;

    i = 0;
    if(!args)
        return ;
    while(args[i])
    {
        free(args[i]);
        i++;
    }
    free(args);
}