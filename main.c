/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:50:14 by chabrune          #+#    #+#             */
/*   Updated: 2023/02/04 18:44:34 by chabrune         ###   ########.fr       */
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
    printf("%d\n", a->val[0].index);
    printf("%d\n", a->val[1].index);
    printf("%d\n", a->val[2].index);
    printf("%d\n", a->val[3].index);
    printf("%d\n", a->val[4].index);

}

// void    sort_emma(t_stack *a, t_stack *b)
// {
//     int i;
//     int emma_len;

//     emma_len = a->len;
//     i = 0;
//     while(i < emma_len)
//     {
//         if (a->val[0].index > emma_len / 2)
//             push_b(a, b);
//         else
//             rotate_a(a);
//         i++;
//     }
// }

void    ola_pepito(t_stack *a, t_stack *b)
{
    int i;
    int j;
    int k;
    int max_index;
    int max_bits;
    int len;

    len = a->len;
    j = 0;
    i = 0;
    k = 0;
    max_index = a->len - 1;
    max_bits = 0;
    while((max_index >> max_bits) != 0)
        max_bits++;
    while(max_bits > i)
    {
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
    ola_pepito(&a, &b);
    return(0);
}
