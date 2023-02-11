/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:46:21 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/11 15:08:13 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *a)
{
	t_val	temp;
	int		k;

	if (a->len > 0)
	{
		temp = a->val[0];
		k = 0;
		while (k < a->len)
		{
			a->val[k] = a->val[k + 1];
			k++;
		}
		a->val[a->len - 1] = temp;
	}
	ft_printf("ra\n");
}

void	rotate_b(t_stack *b)
{
	t_val	temp;
	int		k;

	if (b->len > 0)
	{
		k = 0;
		temp = b->val[0];
		while (k < b->len)
		{
			b->val[k] = b->val[k + 1];
			k++;
		}
		b->val[b->len - 1] = temp;
	}
	ft_printf("rb\n");
}

void	rotate_both(t_stack *a, t_stack *b)
{
	rotate_a(a);
	rotate_b(b);
	ft_printf("rr\n");
}
