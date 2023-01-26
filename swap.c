/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:50:46 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/25 00:14:41 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap_a(int *a, int *i)
{
    if(*i > 0)
    {
        int tmp;
        tmp = a[0]; 
        a[0] = a[0 + 1];
        a[0 + 1] = tmp;
    }
}

void    ft_swap_b(int *b, int *j)
{
    if(*j > 0) 
    {
        int tmp;
        tmp = b[0];
        b[0] = b[0 + 1];
        b[0 + 1] = tmp;
    }
}

void    ft_swap_both(int *a, int *i, int *b, int *j)
{
    ft_swap_a(a, i);
    ft_swap_b(b, j);
}