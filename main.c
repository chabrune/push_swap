/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:50:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/31 17:19:58 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_find_index(t_stack *a)
{
    int i;
    int j;

    i = 0;
    while(i < a->len)
    {
        j = i + 1;
        while(j < a->len)
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

int main(int argc, char **argv)
{
    t_stack a;
    t_stack b;
    if(argc == 2)
    {
        if (ft_fill_split(argv[1], &a, &b) == 1)
            return(write(2, "Error\n", 6));
    }
    else
        ft_fill_arg(argv, &a, &b, argc);
    if (ft_check_double(&a) == 1)
        return(write(2, "Error\n", 6));
    ft_find_index(&a);
    push_b(&a, &b);
    free(&a);
    free(&b);
    return(0);
}
