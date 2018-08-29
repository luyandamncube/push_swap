/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_bounds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:15:09 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/29 15:29:07 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_bounds(t_stack *current)
{
	int high;
	int low;
	int	k;

	high = MAXNEG;
	low = MAXPOS;
	k = 0;
	while (k < current->top)
	{
		if (current->s[k] >= high)
			high = current->s[k];
		if (current->s[k] <= low)
			low = current->s[k];
		k++;
	}
	current->low = low;
	current->high = high;
}
