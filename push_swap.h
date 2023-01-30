#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "../ft_printf/ft_printf.h"

int     ft_atoi(const char *str);
void push_a(int *a, int *i, int *b, int *j);
void push_b(int *a, int *i, int *b, int *j);
void reverse_rotate_a(int *a, int *i);
void reverse_rotate_b(int *b, int *j);
void reverse_rotate_both(int *a, int *i, int *b, int *j);
void rotate_a(int *a, int *i);
void rotate_b(int *b, int *j);
void rotate_both(int *a, int *i, int *b, int *j);
void swap_a(int *a, int *i);
void swap_b(int *b, int *j);
void swap_both(int *a, int *i, int *b, int *j);

#endif