/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:20:26 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/31 15:18:14 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate_a(t_stack *a)
{
    t_val temp;
    int k;
    if (a->len > 0)
    {
        temp = a->val[a->len - 1];
        k = a->len - 1;
        while (k > 0)
        {
            a->val[k] = a->val[k - 1];
            k--;
        }
        a->val[0] = temp;
    }
    ft_printf("rra\n");
}

void reverse_rotate_b(t_stack *b)
{
    t_val temp;
    int k;
    if (b->len > 0)
    {
        temp = b->val[b->len - 1];
        k = b->len - 1;
        while (k > 0)
        {
            b->val[k] = b->val[k - 1];
            k--;
        }
        b->val[0] = temp;
    }
    ft_printf("rrb\n");
}

void reverse_rotate_both(t_stack *a, t_stack *b)
{
    reverse_rotate_a(a);
    reverse_rotate_b(b);
    ft_printf("rrr\n");
}