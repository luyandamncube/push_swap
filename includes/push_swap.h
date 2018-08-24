/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:07:55 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/24 14:23:41 by lmncube          ###   ########.fr       */
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
}				t_stack;

void			initialize(t_stack **new);
int				pop(t_stack *current);
void			swap(t_stack *current);
int				peek(t_stack *current);
void			push(int temp, t_stack *current);
void			swap(t_stack *current);
void			dump(t_stack *current);
void			rot(t_stack *current);
void			rev_rot(t_stack *current);
void			free_all(t_stack **current);
int				check_duplicates(t_stack *input);

#endif
