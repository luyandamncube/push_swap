/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:03:34 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/06 12:25:34 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_1(t_stack *a)
{
	int adjust;

	adjust = 0;
	create_permutations(a);
	while (!is_sorted(a))
	{
		if (!is_almost(a) && !is_loop(a) && adjust++ < 2)
			ft_putstr(instruction(swap(a)));
		if (is_loop(a))
		{
			set_bounds(a);
			if (a->first < a->top / 2)
				ft_putstr(instruction(rev_rot(a)));
			else
				ft_putstr(instruction(rot(a)));
		}
		else if (is_almost(a))
			ft_putstr(instruction(swap(a)));
		else
			ft_putstr(instruction(rot(a)));
	}
}

void	algo_2(t_stack *a, t_stack *b)
{
	while (a->top - 1 > 2)
		push_smallest(a, b);
	algo_1(a);
	while (b->top > 0)
		ft_putstr(instruction(push_to(a, b)));
}
