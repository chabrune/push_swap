/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:40:36 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/17 00:14:49 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a, t_stack *b)
{
	int	k;

	k = a->len;
	if (b->len >= 0)
	{
		while (k > 0)
		{
			a->val[k] = a->val[k - 1];
			k--;
		}
		a->val[0] = b->val[0];
		k = 0;
		while (k < b->len)
		{
			b->val[k] = b->val[k + 1];
			k++;
		}
		a->len = a->len + 1;
		b->len = b->len - 1;
	}
	ft_printf("pa\n");
}

void push_b(t_stack *a, t_stack *b)
{
    int k;

    k = b->len;
    if (a->len > 0)
    {
        while (k > 0)
        {
            b->val[k] = b->val[k - 1];
            k--;
        }
        b->val[0] = a->val[0];
        k = 0;
        while (k < a->len - 1)
        {
            a->val[k] = a->val[k + 1];
            k++;
        }
        b->len = b->len + 1;
        a->len = a->len - 1;
    }
    ft_printf("pb\n");
}
