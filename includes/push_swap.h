/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:07:55 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/26 12:52:36 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"
# include <stdio.h>

typedef	struct	s_stack
{
	int			*s;
	int			top;
	int			name;
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
int	    		rot_both(t_stack *a, t_stack *b);
int				rev_rot(t_stack *current);
int	    		rev_rot_both(t_stack *a, t_stack *b);
void			free_all(t_stack **current);
int				check_duplicates(t_stack *input);

#endif
