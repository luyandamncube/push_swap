/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:18:39 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/03 13:15:30 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rev_rot(t_stack *current)
{
	t_stack	*temp;
	int		store;
	int		k;

	k = current->top;
	temp = malloc(sizeof(t_stack));
	temp->top = 0;
	temp->s = malloc(500);
	temp->sa_score = malloc(500);
	while (k-- > 1)
		temp->s[temp->top++] = pop(current);
	store = pop(current);
	k = temp->top;
	while (k-- > 0)
		current->s[current->top++] = pop(temp);
	push(store, current);
	free(temp->s);
	free(temp->sa_score);
	free(temp);
	if (current->name == 'a')
		return (9);
	else
		return (10);
}
