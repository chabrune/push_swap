/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:24:10 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/11 15:24:39 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_index(t_stack *a)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->len)
	{
		j = i + 1;
		while (j < a->len)
		{
			if (a->val[i].value > a->val[j].value)
				a->val[i].index++;
			else
				a->val[j].index++;
			j++;
		}
		i++;
	}
}

void    ft_len_stack(t_stack *a, t_stack *b)
{
    if (a->len == 3)
        ft_sort_stack_three(a, 0);
    else if (a->len == 5)
		find_best_move_five(a, b);
	else if (a->len == 2)
		ft_sort_two(a);
	else if (a->len == 4)
		find_best_move_four(a, b);
}

int	ft_already_sorted(t_stack *a)
{
	int	i;
	int	fopa;

	fopa = 0;
	i = 0;
	if (a->val[i].index > a->val[i + 1].index)
		fopa++;
	i++;
	while (i < a->len)
	{
		if (a->val[i].index < a->val[i - 1].index)
			fopa++;
		i++;
	}
	return (fopa);
}