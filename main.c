/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:50:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/17 00:55:00 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_free_stack(t_stack *a, t_stack *b)
{
	if(a->val)
		free(a->val);
	if(b->val)
		free(b->val);
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_clean_end(t_stack *a, t_stack *b)
{
	if(a->val)
		free(a->val);
	if(b->val)
		free(b->val);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc >= 2)
	{
		if (argc == 2)
		{
			if (ft_fill_split(argv[1], &a, &b) == 1)
				ft_free_stack(&a, &b);
		}
		else
			if	(ft_fill_arg(argv, &a, &b, argc) == 1)
				ft_free_stack(&a, &b);
		if (ft_check_double(&a) == 1)
			ft_free_stack(&a, &b);
		ft_find_index(&a);
		if (ft_already_sorted(&a) == 0)
			return (0);
		if (a.len >= 2 && a.len <= 5)
			ft_len_stack(&a, &b);
		else
			ola_pepito(&a, &b);
		ft_clean_end(&a, &b);
	}
	return (0);
}

