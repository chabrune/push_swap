#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_val
{
	int		value;
	int		index;
}			t_val;

typedef struct s_stack
{
	t_val	*val;
	int		len;
}			t_stack;

void		ft_free_split_ta_soeur(char **boireuncoup);
void		ft_free_toute_ta_famille(t_stack *a, t_stack *b);
int			ft_atoi_push_swap(const char *str, t_stack *a, t_stack *b);
void		ft_find_index(t_stack *a);
void		ola_pepito(t_stack *a, t_stack *b);
void		ft_sort_rotate_five(t_stack *a, t_stack *b);
void		ft_sort_reverse_rotate_five(t_stack *a, t_stack *b);
int			ft_already_sorted(t_stack *a);
void		find_best_move_five(t_stack *a, t_stack *b);
void		ft_sort_two(t_stack *a);
void		ft_sort_rotate_four(t_stack *a, t_stack *b);
void		ft_sort_reverse_rotate_four(t_stack *a, t_stack *b);
void		ft_len_stack(t_stack *a, t_stack *b);
void		find_best_move_four(t_stack *a, t_stack *b);
void		ft_sort_stack_three(t_stack *a, int start);
void		push_a(t_stack *a, t_stack *b);
void		push_b(t_stack *a, t_stack *b);
void		reverse_rotate_a(t_stack *a);
void		reverse_rotate_b(t_stack *b);
void		reverse_rotate_both(t_stack *a, t_stack *b);
void		rotate_a(t_stack *a);
void		rotate_b(t_stack *b);
void		rotate_both(t_stack *a, t_stack *b);
void		swap_a(t_stack *a);
void		swap_b(t_stack *b);
void		swap_both(t_stack *a, t_stack *b);
int			ft_check_int(char *str);
int			ft_fill_split(char *str, t_stack *a, t_stack *b);
int			ft_fill_arg(char **strs, t_stack *a, t_stack *b, int argc);
int			ft_check_double(t_stack *stack);

#endif