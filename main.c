/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:50:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/11 15:28:54 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc >= 2)
	{
		if (argc == 2)
		{
			if (ft_fill_split(argv[1], &a, &b) == 1)
				return (write(2, "Error\n", 6));
		}
		else
			ft_fill_arg(argv, &a, &b, argc);
		if (ft_check_double(&a) == 1)
			return (write(2, "Error\n", 6));
		ft_find_index(&a);
		if (ft_already_sorted(&a) == 0)
			return (0);
		if (a.len >= 2 && a.len <= 5)
			ft_len_stack(&a, &b);
		else
			ola_pepito(&a, &b);
	}
	return (0);
}
