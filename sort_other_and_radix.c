/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_other_and_radix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:59:57 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/11 15:24:34 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_sort_two(t_stack *a)
{
	if (a->val[0].index == 2)
		swap_a(a);
}

void	ola_pepito(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	max_index;
	int	max_bits;
	int	len;

	len = a->len;
	i = 0;
	max_index = a->len - 1;
	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	while (max_bits > i)
	{
		j = 0;
		while (j < len)
		{
			if ((a->val[0].index >> i & 1) == 1)
				rotate_a(a);
			else
				push_b(a, b);
			j++;
		}
		i++;
		while (b->len > 0)
			push_a(a, b);
	}
}

void	ft_sort_stack_three(t_stack *a, int start)
{
    if (a->val[0].index == 3 + start && a->val[1].index == 1 + start
    	&& a->val[2].index == 2 + start)
    	    rotate_a(a);
    if (a->val[0].index == 3 + start && a->val[1].index == 2 + start
    	&& a->val[2].index == 1 + start)
    {
    	swap_a(a);
    	reverse_rotate_a(a);
    }
    if (a->val[0].index == 2 + start && a->val[1].index == 3 + start
    	&& a->val[2].index == 1 + start)
    	    reverse_rotate_a(a);
    if (a->val[0].index == 2 + start && a->val[1].index == 1 + start
    	&& a->val[2].index == 3 + start)
    	    swap_a(a);
    if (a->val[0].index == 1 + start && a->val[1].index == 3 + start
    	&& a->val[2].index == 2 + start)
    {
    	rotate_a(a);
    	swap_a(a);
    	reverse_rotate_a(a);
    }
}
