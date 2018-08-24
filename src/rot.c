/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:14:14 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/24 16:17:45 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot(t_stack *current)
{
	t_stack	*temp;
	int		store;
	int		k;

	store = pop(current);
	k = current->top;
	initialize(&temp, 0);
	while (k > 0)
	{
		temp->s[temp->top++] = pop(current);
		k--;
	}
	push(store, current);
	k = temp->top;
	while (k > 0)
	{
		current->s[current->top++] = pop(temp);
		k--;
	}
	free(temp);
}
