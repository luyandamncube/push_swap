/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:07:55 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/30 15:25:41 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"
# include <stdio.h>
# include <math.h>

typedef	struct	s_stack
{
	int			*s;
	int			*sa_score;
	int			*pb_score;
	int			high;
	int			low;
	int			top;
	int			name;
	int			*loops;
	int			*almost;
}				t_stack;

void			initialize(t_stack **new, int name);
int				pop(t_stack *current);
int				swap(t_stack *current);
int				swap_both(t_stack *a, t_stack *b);
int				peek(t_stack *current);
void			push(int temp, t_stack *current);
int				push_to(t_stack *dest, t_stack *src);
void			dump(t_stack *a, t_stack *b);
int				rot(t_stack *current);
int				rot_both(t_stack *a, t_stack *b);
int				rev_rot(t_stack *current);
int				rev_rot_both(t_stack *a, t_stack *b);
void			free_all(t_stack **current);
int				check_duplicates(t_stack *input);
int				is_sorted(int *arr, int n);
void			init_score(t_stack *current);
int				partition(int *arr, int l, int r);
int				quick_select(int *arr, int l, int r, int k);
void			set_bounds(t_stack *current);
void			algo_1(t_stack *a);
void			algo_2(t_stack *a);
void			algo_3(t_stack *a);
void			rot_silent(int *arr, int n);
void			bubble_sort(int *arr, int size);
void			insert_here(int *dest, int *src, int pos, int size);
void			gen_loops(t_stack *current);
void			gen_almost(t_stack *current);
int			find_loops(t_stack *a);
int			find_almost(t_stack *a);
#endif
