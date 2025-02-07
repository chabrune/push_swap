/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_and_fill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:17:01 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/17 00:55:01 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_free_split(char **split)
{
	int	j;

	j = -1;
	if (split)
	{
		while (split[++j])
			free(split[j]);
		free(split);
		split = NULL;
	}
}

int	ft_fill_split(char *str, t_stack *a, t_stack *b)
{
	int		i;
	char	**args;

	i = 0;
	args = ft_split(str, ' ', &a->len);
	a->val = ft_calloc(sizeof(t_val), a->len);
	b->val = ft_calloc(sizeof(t_val), a->len);
	if (!a || !b)
		return (1);
	while (args[i])
	{
		if (ft_check_int(args[i]) == 1)
			return (1);
		a->val[i].value = ft_atoi_push_swap(args[i], a, b, args);
		a->val[i].index = 1;
		i++;
	}
	b->len = 0;
	ft_free_split(args);
	return (0);
}

int	ft_fill_arg(char **strs, t_stack *a, t_stack *b, int argc)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	a->val = ft_calloc(sizeof(t_val), argc - 1);
	b->val = ft_calloc(sizeof(t_val), argc - 1);
	if (!a || !b)
		return (1);
	a->len = argc - 1;
	while (strs[++i])
	{
		a->val[j].value = ft_atoi_push_swap(strs[i], a, b, NULL);
		a->val[j++].index = 1;
	}
	b->len = 0;
	return (0);
}

int	ft_check_double(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->len)
	{
		j = i + 1;
		while (j < stack->len)
		{
			if (stack->val[i].value == stack->val[j].value)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
