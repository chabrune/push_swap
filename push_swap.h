#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_val
{
    int value;
    int index;
}   t_val;

typedef struct s_stack
{
    t_val   *val;
    int len;
}   t_stack;

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
int ft_check_int(char *str);
int ft_fill_split(char *str, t_stack *stack);
void    ft_fill_arg(char **strs, t_stack *stack);
int    ft_check_double(t_stack stack);

#endif 