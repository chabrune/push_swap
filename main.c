/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:50:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/08 23:14:02 by chabrune         ###   ########.fr       */
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

void    ola_pepito(t_stack *a, t_stack *b)
{
    int i;
    int j;
    int max_index;
    int max_bits;
    int len;

    len = a->len;
    i = 0;
    max_index = a->len - 1;
    max_bits = 0;
    while((max_index >> max_bits) != 0)
        max_bits++;
    while(max_bits > i)
    {
        j = 0;
        while(j < len)
        {
            if ((a->val[0].index >> i & 1) == 1)
                rotate_a(a);
            else
                push_b(a, b);
            j++;
        }
        i++;
        while(b->len > 0)
            push_a(a, b);
    }
}

int    ft_already_sorted(t_stack *a)
{
    int i;
    int fopa;

    fopa = 0;
    i = 0;
    if(a->val[i].index > a->val[i + 1].index)
        fopa++;
    i++;
    while(i < a->len)
    {
        if(a->val[i].index < a->val[i - 1].index)
            fopa++;
        i++;
    }
    return(fopa);
}

// void    ft_sort_stack_three(t_stack *a, t_stack *b)
// {
// }

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    a = malloc(sizeof(t_stack));
    b = malloc(sizeof(t_stack));
    if(argc == 2)
    {
        if (ft_fill_split(argv[1], a, b) == 1)
            return(write(2, "Error\n", 6));
    }
    else
        ft_fill_arg(argv, a, b, argc);
    if (ft_check_double(a) == 1)
        return(write(2, "Error\n", 6));
    ft_find_index(a);
    if (ft_already_sorted(a)  == 0)
        return(write(1, "Already sorted", 15));
    ola_pepito(a, b);
    free(a);
    free(b);
    return(0);
}
