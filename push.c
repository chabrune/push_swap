/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:40:36 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/30 13:59:03 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(int *a, int *i, int *b, int *j)
{
    if (*j >= 0)
    {
        int k;
        k = *i;
        while(k > 0)
        {
            a[k] = a[k - 1];
            k--;
        }
        a[0] = b[0];
        k = 0;
        while(k < *j)
        {
            b[k] = b[k + 1];
            k++;
        }
        *i = *i + 1;
        *j = *j - 1;
    }
    ft_printf("pa\n");
}


void push_b(int *a, int *i, int *b, int *j)
{
    if (*i >= 0)
    {
        int k;
        k = *j;
        while(k > 0)
        {
            b[k] = b[k - 1];
            k--;
        }
        b[0] = a[0];
        k = 0;
        while(k < *i)
        {
            a[k] = a[k + 1];
            k++;
        }
        *j = *j + 1;
        *i = *i - 1;
    }
    ft_printf("pb\n");
}