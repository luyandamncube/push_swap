/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:18:39 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/24 13:02:47 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rot(t_stack *current)
{
	t_stack	*temp;
	int		store;
	int		k;

	k = current->top;
	initialize(&temp);
	while (k > 1)
	{
		temp->s[temp->top++] = pop(current);
		k--;
	}
	store = pop(current);
	k = temp->top;
	while (k > 0)
	{
		current->s[current->top++] = pop(temp);
		k--;
	}
	push(store, current);
}
