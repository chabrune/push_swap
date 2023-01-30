/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:46:21 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/25 18:54:23 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_a(int *a, int *i)
{
    if (*i > 0)
    {
        int temp;
        int k;

        temp = a[0];
        k = 0;
        while(k < *i)
        {
            a[k] = a[k + 1];
            k++;
        }
        a[*i - 1] = temp;
    }
}

void rotate_b(int *b, int *j)
{
    if (*j > 0)
    {
        int temp;
        int k;

        k = 0;
        temp = b[0];
        while(k < *j)
        {
            b[k] = b[k + 1];
            k++;
        }
        b[*j - 1] = temp;
    }
}

void rotate_both(int *a, int *i, int *b, int *j)
{
    rotate_a(a, i);
    rotate_b(b, j);
}