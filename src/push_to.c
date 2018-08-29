/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 10:36:00 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/29 15:33:01 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_to(t_stack *dest, t_stack *src)
{
	int		temp;

	temp = src->s[src->top - 1];
	src->top--;
	dest->s[dest->top] = temp;
	dest->top++;
	dest->name == 'a' ? set_bounds(dest) : set_bounds(src);
	if (dest->name == 'a')
	{
		init_score(dest);
		return (4);
	}
	else
	{
		init_score(src);
		return (5);
	}

}
