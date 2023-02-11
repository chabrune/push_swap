/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:58:37 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/11 16:12:20 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_rotate_four(t_stack *a, t_stack *b)
{
	while (b->len != 1)
	{
		if (a->val[0].index == 1)
			push_b(a, b);
		else
			rotate_a(a);
	}
	ft_sort_stack_three(a, 1);
	push_a(a, b);
}

void	ft_sort_reverse_rotate_four(t_stack *a, t_stack *b)
{
	while (b->len != 1)
	{
		if (a->val[0].index == 1)
			push_b(a, b);
		else
			reverse_rotate_a(a);
	}
	ft_sort_stack_three(a, 1);
	push_a(a, b);
}

void	find_best_move_four(t_stack *a, t_stack *b)
{
	int	j;

	j = 0;
	while (a->val[j].index != 1)
		j++;
	if (j + 1 <= 2)
		ft_sort_rotate_four(a, b);
	else if (j + 1 >= 2)
		ft_sort_reverse_rotate_four(a, b);
}
