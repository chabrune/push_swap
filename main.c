/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:50:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/30 16:54:22 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_int(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
	    if ((str[i] >= 48 && str[i] <= 57) || str[i] == '+' || str[i] == '-')
		    return (1);
        i++;
    }
    return(0);
}

int ft_fill_split(char *str, t_stack *stack)
{
    int i;
    char **args;

    i = 0;
    args = ft_split(str, ' ', &stack->len);
    stack->val = ft_calloc(sizeof(t_val), stack->len);
    while(args[i])
    {
        if (ft_check_int(args[i]) == 1)
            return (-1);
        stack->val[i].value = ft_atoi(args[i]);
        stack->val[i].index = 0;
        i++;
    }
    return(0);
}

void    ft_fill_arg(char **strs, t_stack *stack)
{
    int i;

    i = -1;
    stack->val = ft_calloc(sizeof(t_val), stack->len);
    while(strs[++i])
        stack->val[i].value = ft_atoi(strs[i]);
}

int    ft_check_double(t_stack stack)
{
    int i;
    int j;

    i = 0;
    while(i < stack.len)
    {
        j = i;
        while(j < stack.len)
        {
            if(stack.val[i].index ==  stack.val[j].index)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    t_stack stack_a;

    if(argc == 2)
        if (ft_fill_split(argv[1], &stack_a) == 1)
            return(printf("Error\n"));
    ft_fill_arg(argv, &stack_a);
    if (ft_check_double(stack_a) == 1)
        return(printf("Error\n"));
    return (0);
}
