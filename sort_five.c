/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:58:08 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/11 15:07:31 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_rotate_five(t_stack *a, t_stack *b)
{
	while (b->len != 2)
	{
		if (a->val[0].index == 1 || a->val[0].index == 2)
			push_b(a, b);
		else
			rotate_a(a);
	}
	ft_sort_stack_three(a, b, 2);
	if (b->val[0].index == 1)
		rotate_b(b);
	push_a(a, b);
	push_a(a, b);
}

void	ft_sort_reverse_rotate_five(t_stack *a, t_stack *b)
{
	while (b->len != 2)
	{
		if (a->val[0].index == 1 || a->val[0].index == 2)
			push_b(a, b);
		else
			reverse_rotate_a(a);
	}
	ft_sort_stack_three(a, b, 2);
	if (b->val[0].index == 1)
		rotate_b(b);
	push_a(a, b);
	push_a(a, b);
}

void	find_best_move_five(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a->val[j].index != 1)
		j++;
	while (a->val[i].index != 2)
		i++;
	if ((i + j) + 1 <= 4)
		ft_sort_rotate_five(a, b);
	else if ((i + j) + 1 >= 4)
		ft_sort_reverse_rotate_five(a, b);
}
