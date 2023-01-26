#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "../ft_printf/ft_printf.h"

int     ft_atoi(const char *str);
void    ft_swap_a(int *a, int *pile_a);
void    ft_push_a(int *a, int *i, int *b, int *j);
void    ft_swap_b(int *b, int *j);
void    ft_swap_both(int *a, int *i, int *b, int *j);
void    ft_push_a(int *a, int *i, int *b, int *j);
void    ft_push_b(int *a, int *i, int *b, int *j);


#endif