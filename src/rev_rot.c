/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:18:39 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/26 12:48:31 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rev_rot(t_stack *current)
{
	t_stack	*temp;
	int		store;
	int		k;

	k = current->top;
	initialize(&temp, 0);
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
	free(temp);
	if (current->name == 'a')
		return (9);
	else
		return (10);
}
