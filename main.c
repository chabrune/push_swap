/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:50:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/16 13:05:59 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_free_toute_ta_famille(t_stack *a, t_stack *b)
{
	if(a && b)
	{
		free(a->val);
		free(b->val);
		a = NULL;
		b = NULL;
	}
}

void	ft_free_split_ta_soeur(char **boireuncoup)
{
	int j;

	j = 0;
	while(boireuncoup[j])
	{
		free(boireuncoup[j]);
		j++;
	}
	free(boireuncoup);
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
				return(write(2, "Error\n", 6));
		}
		else
			if	(ft_fill_arg(argv, &a, &b, argc) == 1)
				ft_free_toute_ta_famille(&a, &b);
		if (ft_check_double(&a) == 1)
			ft_free_toute_ta_famille(&a, &b);
		ft_find_index(&a);
		if (ft_already_sorted(&a) == 0)
			return (0);
		if (a.len >= 2 && a.len <= 5)
			ft_len_stack(&a, &b);
		else
			ola_pepito(&a, &b);
		ft_free_toute_ta_famille(&a, &b);
	}
	return (0);
}

