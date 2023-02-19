/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_free_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:25:17 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/19 15:28:43 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_total(t_stack *a, t_stack *b, char **split)
{
	if (split)
		ft_free_split(split);
	free(a->val);
	free(b->val);
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_stack(t_stack *a, t_stack *b)
{
	if (a->val)
		free(a->val);
	if (b->val)
		free(b->val);
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_clean_end(t_stack *a, t_stack *b)
{
	if (a->val)
		free(a->val);
	if (b->val)
		free(b->val);
	exit(1);
}
