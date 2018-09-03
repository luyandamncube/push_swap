/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:14:14 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/03 13:05:48 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rot(t_stack *current)
{
	t_stack	*temp;
	int		store;
	int		k;

	store = pop(current);
	k = current->top;
	temp = malloc(sizeof(t_stack));
	temp->top = 0;
	temp->s = malloc(500);
	temp->sa_score = malloc(500);
	while (k-- > 0)
		temp->s[temp->top++] = pop(current);
	push(store, current);
	k = temp->top;
	while (k-- > 0)
		current->s[current->top++] = pop(temp);
	free(temp->s);
	free(temp->sa_score);
	free(temp);
	if (current->name == 'a')
		return (6);
	else
		return (7);
}
