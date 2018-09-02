/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 09:19:36 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/31 16:24:14 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_stack *current)
{
	int k;

	k = 0;
	if (current->top == 0 || current->top == 1)
		return (1);
	while (k < current->top)
	{
		if (current->s[k] < current->s[k + 1])
			return (0);
		k++;
	}
	return (1);
}
