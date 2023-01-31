/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:50:46 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/31 14:31:36 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_stack *a)
{
    t_val temp;
    if (a->len > 0)
    {
        temp = a->val[0];
        a->val[0] = a->val[1];
        a->val[1] = temp;
    }
    ft_printf("sa\n");
}

void swap_b(t_stack *b)
{
    t_val temp;
    if (b->len > 0)
    {
        temp = b->val[0];
        b->val[0] = b->val[0];
        b->val[0] = temp;
    }
    ft_printf("sb\n");
}

void swap_both(t_stack *a, t_stack *b)
{
    swap_a(a);
    swap_b(b);
    ft_printf("ss\n");
}