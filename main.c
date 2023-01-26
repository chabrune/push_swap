/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:50:03 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/25 00:50:26 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    int *a;
    int *b;

    i = -1;
    j = -1;
    k = 0;
    a = malloc(sizeof(int) * argc - 1);
    b = malloc(sizeof(int) * argc - 1);
    while(argv[++k])
    {
        a[++i] = ft_atoi(argv[k]);
    }
    ft_swap_a(a, &i);
    ft_push_b(a, &i, b, &j);
    ft_push_b(a, &i, b, &j);
    ft_push_b(a, &i, b, &j);
    i = -1;
    j = -1;
    while(a[++i])
        printf("a = %d\n", a[i]);
    while(b[++j])
        printf("b = %d\n", b[j]);
    free(a);
    free(b);
    return(0);
}