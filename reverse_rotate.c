/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:20:26 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/30 14:20:31 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate_a(int *a, int *i)
{
    if (*i > 0)
    {
        int temp;
        int k;

        temp = a[*i - 1];
        k = *i - 1;
        while (k > 0)
        {
            a[k] = a[k - 1];
            k--;
        }
        a[0] = temp;
    }
    ft_printf("rra\n");
}

void reverse_rotate_b(int *b, int *j)
{
    if (*j > 0)
    {
        int temp;
        int k;

        temp = b[*j - 1];
        k = *j - 1;
        while (k > 0)
        {
            b[k] = b[k - 1];
            k--;
        }
        b[0] = temp;
    }
    ft_printf("rrb\n");
}

void reverse_rotate_both(int *a, int *i, int *b, int *j)
{
    reverse_rotate_a(a, i);
    reverse_rotate_b(b, j);
    ft_printf("rrr\n");
}