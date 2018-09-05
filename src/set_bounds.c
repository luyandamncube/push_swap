/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_bounds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:15:09 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/05 15:06:36 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_bounds(t_stack *a)
{
	int k[5];

	a->first_ = MAXPOS;
	a->second_ = MAXPOS;
	k[4] = -1;
	while (++k[4] < a->top)
	{
		if (a->s[k[4]] < a->first_)
		{
			a->second_ = a->first_;
			a->second = k[4];
			a->first_ = a->s[k[4]];
			a->first = k[4];
		}
		else if (a->s[k[4]] < a->second_ && a->s[k[4]] != a->first_)
		{
			a->second = k[4];
			a->second_ = a->s[k[4]];
		}
	}
}
