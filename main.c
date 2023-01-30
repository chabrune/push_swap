/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:50:03 by chabrune          #+#    #+#             */
/*   Updated: 2023/01/25 19:09:17 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int c_a = -1;
    int c_b = -1;
    int *a;
    int *b;
    int i;
    int j;

    j = 0;
    i = 1;
    a = malloc(sizeof(int) * argc - 1);
    b = malloc(sizeof(int) * argc - 1);
    while(i <= argc - 1)
    {
        a[j] = atoi(argv[i]);
        j++;
        i++;
    }
    printf("Avant :\n");
    printf("A : ");
    while(a[++c_a])
    {
        printf("%d ", a[c_a]);
    }
    printf("\n");
    printf("B : ");
    while(b[++c_b])
    {
        printf("%d ", b[c_b]);
    }
    printf("\n");

    swap_a(a, &c_a);
    push_b(a, &c_a, b, &c_b);
    push_b(a, &c_a, b, &c_b);
    push_b(a, &c_a, b, &c_b);
    rotate_a(a, &c_a);
    rotate_b(b, &c_b);
    reverse_rotate_a(a, &c_a);
    reverse_rotate_b(b, &c_b);
    swap_a(a, &c_a);
    push_a(a, &c_a, b, &c_b);
    push_a(a, &c_a, b, &c_b);
    push_a(a, &c_a, b, &c_b);

    printf("Après :\n");
    printf("A : ");
    c_a = -1;
    c_b = -1;
    while(a[++c_a])
    {
        printf("%d ", a[c_a]);
    }
    printf("\n");

    printf("B : ");
    while(b[++c_b])
    {
        printf("%d ", b[c_b]);
    }
    printf("\n");

    return 0;
}
