/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:50:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/31 16:53:26 by chabrune         ###   ########.fr       */
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
    ft_printf("A = \n");
    ft_printf("%d\n", a.val[0].value);
    ft_printf("%d\n", a.val[1].value);
    ft_printf("%d\n", a.val[2].value);
    ft_printf("%d\n", a.val[3].value);
    ft_printf("%d\n", a.val[4].value);
    ft_printf("%d\n\n", a.val[5].value);
    ft_printf("index = \n");
    ft_printf("%d\n", a.val[0].index);
    ft_printf("%d\n", a.val[1].index);
    ft_printf("%d\n", a.val[2].index);
    ft_printf("%d\n", a.val[3].index);
    ft_printf("%d\n", a.val[4].index);
    ft_printf("%d\n\n", a.val[5].index);
    swap_a(&a);
    push_b(&a, &b);
    push_b(&a, &b);
    push_b(&a, &b);
    rotate_a(&a);
    rotate_b(&b);
    reverse_rotate_a(&a);
    reverse_rotate_b(&b);
    swap_a(&a);
    push_a(&a, &b);
    push_a(&a, &b);
    push_a(&a, &b);
    ft_printf("A = \n");
    ft_printf("%d\n", a.val[0].value);
    ft_printf("%d\n", a.val[1].value);
    ft_printf("%d\n", a.val[2].value);
    ft_printf("%d\n", a.val[3].value);
    ft_printf("%d\n", a.val[4].value);
    ft_printf("%d\n\n", a.val[5].value);
    ft_printf("B = \n");
    ft_printf("%d\n", b.val[0].value);
    ft_printf("%d\n", b.val[1].value);
    ft_printf("%d\n", b.val[2].value);
    ft_printf("%d\n", b.val[3].value);
    ft_printf("%d\n", b.val[4].value);
    ft_printf("%d\n\n", b.val[5].value);
    return(0);
}
