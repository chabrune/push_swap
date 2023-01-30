/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:50:46 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/30 13:57:40 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(int *a, int *i)
{
    if (*i > 0)
    {
        int temp;
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }
    ft_printf("sa\n");
}

void swap_b(int *b, int *j)
{
    if (*j > 0)
    {
        int temp;
        temp = b[0];
        b[0] = b[1];
        b[1] = temp;
    }
    ft_printf("sb\n");
}

void swap_both(int *a, int *i, int *b, int *j)
{
    swap_a(a, i);
    swap_b(b, j);
    ft_printf("ss\n");
}