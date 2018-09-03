/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:03:34 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/03 14:05:46 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*instruction(int n)
{
	if (n == 0)
		return ("none\n");
	if (n == 1)
		return ("sa\n");
	if (n == 2)
		return ("sb\n");
	if (n == 3)
		return ("ss\n");
	if (n == 4)
		return ("pa\n");
	if (n == 5)
		return ("pb\n");
	if (n == 6)
		return ("ra\n");
	if (n == 7)
		return ("rb\n");
	if (n == 8)
		return ("rr\n");
	if (n == 9)
		return ("rra\n");
	if (n == 10)
		return ("rrb\n");
	if (n == 11)
		return ("rrr\n");
	return ("");
}

void	algo_1(t_stack *a)
{
	int adjust;

	adjust = 0;
	while (!is_sorted(a))
	{
		if (!is_almost(a) && !is_loop(a) && adjust++ < 2)
			ft_putstr(instruction(swap(a)));
		if (is_loop(a))
			ft_putstr(instruction(rot(a)));
		else if (is_almost(a))
			ft_putstr(instruction(swap(a)));
		else
			ft_putstr(instruction(rot(a)));
	}
}
