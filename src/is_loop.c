/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:49:53 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/31 13:30:51 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_loop(t_stack *a)
{
	int k[4];

	k[0] = 0;
	k[3] = a->top;
	rev_arr(a->loops, k[3] * k[3]);
	while (k[0] < k[3])
	{
		k[1] = 0;
		k[2] = 0;
		while (k[1] < k[3])
		{
			if (a->loops[k[0] * k[3] + k[1]] == a->s[k[1]])
				k[2]++;
			k[1]++;
		}
		if (k[2] == k[3])
			return (1);
		k[0]++;
	}
	return (0);
}
