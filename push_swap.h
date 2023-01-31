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

void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	reverse_rotate_a(t_stack *a);
void	reverse_rotate_b(t_stack *b);
void	reverse_rotate_both(t_stack *a, t_stack *b);
void	rotate_a(t_stack *a);
void	rotate_b(t_stack *b);
void	rotate_both(t_stack *a, t_stack *b);
void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	swap_both(t_stack *a, t_stack *b);
int		ft_check_int(char *str);
int		ft_fill_split(char *str, t_stack *a, t_stack *b);
void	ft_fill_arg(char **strs, t_stack *a, t_stack *b, int argc);
int		ft_check_double(t_stack *stack);

#endif 